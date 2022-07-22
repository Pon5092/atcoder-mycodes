#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include<queue>

using namespace std;
typedef long long ll;
#define loop(i,k,n) for((i) = (k); (i) < (n); (i)++)
#define rloop(i,k,n) for((i) = (k); (i) > (n); (i)--)
#define outyes cout << "Yes" << endl  
#define outno cout << "No" << endl
#define outans cout << ans << endl;
//const ll mod =  998244353L;
//const ll mod = 1e9+7L;
//const double PI =3.14159265359d;
//const double E =2.718281828d;

bool can_cut(int minlength,int n, vector<int>* a){
    int devide=0,length =0,cut_place=0;
    for(auto e: *a){
        length = e-cut_place;
        if(minlength <= length){
            cut_place=e;
            devide++;
        }
    }
    devide--;
    if(n <= devide) return true;
    else return false;
}

int main()
{
    //ios::sync_with_stdio(false);
    //cin.tie(nullptr);
    int i;
    int k,l,n;
    cin >> n >> l;
    cin >> k;
    vector<int> a(n);
    int sum;
    for(auto& e:a) cin >> e;
    a.push_back(l);

    int big=l, small=0;
    int mid=(big+small)/2;
    while(big - small > 1){
        mid =(big+small)/2;
        //cout << mid << " ";
        if(can_cut(mid,k,&a)){
            small = mid;
        } else {
            big = mid;
        }
    }
    cout << small << endl;   
    return 0;
}
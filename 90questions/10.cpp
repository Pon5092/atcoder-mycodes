#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include<queue>
#include<map>

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

int main()
{
    //ios::sync_with_stdio(false);
    //cin.tie(nullptr);
    int i;
    int n,p,c;
    cin >> n;
    vector<ll> one(n+1);
    vector<ll> two(n+1);
    loop(i,1,n+1) {
        cin >> c >> p;
        if(c==1){
            one[i] = one[i-1]+p;
            two[i] = two[i-1];
        }else{
            one[i] = one[i-1];
            two[i] = two[i-1]+p;
        }
    }
    int q,r,l;
    cin >> q;
    while(q--){
        cin >> l >> r;       
        l--;
        cout << one[r] - one[l] << " " << two[r] - two[l] << endl;
    }
    
    return 0;
}
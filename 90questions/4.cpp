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

int main()
{
    //ios::sync_with_stdio(false);
    //cin.tie(nullptr);
    int i,j;
    int h,w;
    cin >> h >> w;
    vector<vector<int>> a(h,vector<int> (w));
    
    for(auto& e:a){
        for(auto& l:e){
            cin >> l;
        }
    }
    vector<int> bl(h,0);
    vector<int> bw(w,0);

    loop(i,0,h){
        loop(j,0,w){
            bl[i]+=a[i][j];
        }
    }
    loop(i,0,w){
        loop(j,0,h){
            bw[i]+=a[j][i];
        }
    }
    loop(i,0,h){
        loop(j,0,w-1){
            cout << bl[i] + bw[j] - a[i][j] << " ";
        }
        cout << bl[i] + bw[j] - a[i][j] << endl;
    }
    return 0;
}
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>

using namespace std;
typedef long long ll;
#define loop(i,k,n) for((i) = (k); (i) < (n); (i)++)
#define rloop(i,k,n) for((i) = (k); (i) > (n); (i)--)
#define outyes cout << "Yes" << endl  
#define outno cout << "No" << endl
#define outans cout << ans << endl;
//const ll mod =  998244353;
//const ll mod = 1e9+7;

int main()
{
    //ios::sync_with_stdio(false);
    //cin.tie(nullptr);
    int i,j,n,first;
    cin >>n;
    bool flip = false;
    loop(i,0,n){
        flip = true;
        first = n*i+1;
        cout << first;
        loop(j,2,n){
            if(flip){
                cout<< " " << first+(n-1)/2+j/2;
                flip = false;
            }else{
                cout << " " << first+ j/2;
                flip = true;
            }
        }
        if(n==1) break;
        else if(n%2) cout << " " << first+n/2;
        else cout << " " << first+n-1;
        cout << endl;
    }
    return 0;
}
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
    ll i;
    string k;
    ll n;
    cin >> n >> k;
    ll ka,kb;
    ka = stoll(k);
    reverse(k.begin(),k.end());
    kb = stoll(k);
    ll ans=0;
    bool isSame = (ka == kb);    
    //cout << ka  <<  " " <<kb << endl;
    if(ka > kb){
        cout << 0 << endl;
    } else{
        while(n >= ka){
            ans++;
            ka*=10;
        }
        if(!isSame){
            while(n >= kb){
                ans++;
                kb*=10;
            }
        }
        outans;
    }
    return 0;
}
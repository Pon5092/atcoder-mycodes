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
    ll n,a,b;
    cin >> n >> a >> b;
    if(n < a-1){
        cout << 0 << endl;
        return 0;
    }
    if(a <= b){
        cout << n-(a-1L) << endl;
        return 0;
    }
    ll ans = n-(a-1L);
    if(ans < 0) ans =0;
    ll k = ans / a;
    ll l = ans % a;
    ans = 0;
    ans += k * b;
    ans +=min(l,b);
    outans;
    return 0;
}
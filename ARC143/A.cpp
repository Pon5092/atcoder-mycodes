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
    int i;
    ll a,b,c;
    cin >> a >> b >>c;
    ll big = max(a,max(b,c));
    ll mas = a - big + b - big + c;
    if(mas<0) {
        cout << -1 << endl;
        return 0;
    }
    cout << big << endl;
    return 0;
}
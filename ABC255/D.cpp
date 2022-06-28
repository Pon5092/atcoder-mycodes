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
    ll n,q;
    ll x;
    cin >> n >> q;
    vector<ll> a(n);
    vector<ll> aback(n+1);
    for(auto& e:a) cin >> e;
    sort(a.begin(),a.end());
    aback[0] = 0;
    loop(i,0,n+1){
        aback[i+1] = a[i] + aback[i];
    }
    ll ans;
    while(q--){
        cin >> x;
        ll point = upper_bound(a.begin(),a.end(),x)-a.begin();
        //cout << point << endl;
        ans = x*(point) - aback[point];
        //cout << ans << endl;
        ans += (aback[n] - aback[point]) - x*(n-point);
        cout << ans << endl;
    }
    
    return 0;
}
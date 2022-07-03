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
    ll n,x;
    cin >> n >> x;
    vector<pair<ll,ll>> ab(n);
    for(auto& e:ab){
        cin >> e.first >> e.second;
    }

    vector<ll> minb(n);
    minb[0] = ab[0].second;
    loop(i,1,n){
        minb[i] = min(minb[i-1],ab[i].second);
    }
    vector<ll> pastt(n);
    pastt[0] = ab[0].first+ab[0].second;
    loop(i,1,n){
        pastt[i] = pastt[i-1]+ab[i].first+ab[i].second;
    }
    ll playnum =min(x,n);

    vector<ll> sumt(playnum);
    loop(i,0,playnum){
        sumt[i] = minb[i]*(x-i-1)+pastt[i];
    }
    cout << *min_element(sumt.begin(),sumt.end()) << endl;
    return 0;
}
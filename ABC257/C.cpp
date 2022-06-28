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
    ll i,n,rsum=0,sum=0;
    string s;
    cin >> n;
    vector<pair<ll,bool>> people(n);
    cin >> s;
    i=0;
    for(auto& e:people){
        cin >>e.first;
        e.second = s[i]- '0';
        if(s[i]-'0') sum++;
        i++;
    }
    rsum = sum;
    //cout << sum << endl;
    if(rsum == n || rsum == 0){
        cout << n << endl;
        return 0;
    }
    sort(people.begin(),people.end());
    ll max=0,now;
    max = rsum;
    loop(i,0,n){
        rsum-= people[i].second;
        //cout << rsum << " ";
        now = rsum + (i+1-(sum-rsum));
        if(now > max && (i == n-1 ||(i != n-1 && people[i].first != people[i+1].first))) max = now;
        //cout << max << endl;
    }
    ll ans = max;
    outans;
    return 0;
}
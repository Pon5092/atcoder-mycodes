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
    int i;
    int n,q;
    cin >> n;
    vector<int> a(n);
    for(auto& e:a) cin >> e;
    sort(a.begin(),a.end());
    cin >> q;
    int b,ans;
    while(q--){
        cin >> b;
        auto r = lower_bound(a.begin(),a.end(),b);
        if(r == a.begin()) ans = *r - b;
        else ans = min(abs(*r - b),abs(b - *prev(r)));
        cout << ans << endl;
    }
    
    return 0;
}
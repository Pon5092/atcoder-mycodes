#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include<map>

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
    int i,j,n;
    cin >>n;
    vector<int> a(1100,1000);
    vector<int> b(1100,1000);
    vector<int> c(1100,1000);
    loop(i,3,n+1){
        cout << "? " << 1 << " " << i << endl;
        cin >> a[i];
        cout << "? " << 2 << " " << i << endl;
        cin >> b[i];
    }
    bool ison=false;
    bool isdob = false;
    vector<int> revi; 
    loop(i,0,101){
        c[i] = a[i]+b[i];
        if(c[i] == 3) revi.push_back(i); 
    }
    int ans = *min_element(c.begin(),c.end());
    int k;
    if(ans!=3)  cout << "! " << ans << endl;
    else {
        if(revi.size() != 2){
            cout << "! " << 1 << endl;
            return 0;
        }
        auto p = revi[0];
        auto l = revi[1];
        cout << "? " << p << " " << l << endl;
        cin >> k;
        if(k != 1){
            cout << "! " << 1 << endl;
            return 0;
        }
        cout << "! " << ans << endl;
    }
    return 0;
}
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
const ll mod = 1e9+7L;
//const double PI =3.14159265359d;
//const double E =2.718281828d;

int main()
{
    //ios::sync_with_stdio(false);
    //cin.tie(nullptr);
    int i,j;
    ll n;
    cin >> n;
    string s;
    s.reserve(n);
    cin >> s;
    string name = "atcoder";
    vector<vector<int>> a(s.size()+1, vector<int> (8));
    for(auto& e:a) e[0] = 1;
    loop(i,0,s.size()){
        loop(j,0,name.size()){
            if(s[i] == name[j]) a[i+1][j+1] = a[i][j+1] + a[i][j];
            else a[i+1][j+1] = a[i][j+1];
            a[i+1][j+1]%=mod;
        }
    }
    cout << a[s.size()][name.size()] << endl;
    return 0;
}
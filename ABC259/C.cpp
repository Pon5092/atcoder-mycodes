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
    string s,t;
    cin >> s;
    cin >> t;
    ll size = t.size();
    ll splace = 0,tplace;
    if(t.size() < s.size()){
        outno;
        return 0;
    }
    loop(tplace,0,size){
        if(t[tplace] != s[splace]){
            if(!(splace >1 && t[tplace] == s[splace-1]&& t[tplace] == s[splace-2])){
                outno;
                return 0;
            }
        }else{
            splace++;
        }
    }
    outyes;
    return 0;
}
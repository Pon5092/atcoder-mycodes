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
    string s;
    cin >> s;
    int size = s.size();
    vector<ll> dig(size+1,0);
    loop(i,0,size){
        dig[i+1] = dig[i] + ll(s[i] - '0');
    }
    string ans;
    ans.reserve(size*2);
    ll nownum=0;
    rloop(i,size,0){
        nownum+=dig[i];
        ans.push_back(char(nownum%10+'0'));
        nownum/=10;
    }
    while(nownum){
        ans.push_back(char(nownum%10+'0'));
        nownum/=10;
    }
    reverse(ans.begin(),ans.end());
    cout << ans << endl;
    return 0;
}
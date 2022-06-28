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

int solve(int n, bool ch[][26],int res[26]){
    int i;
    if(n==-1){
        int ans=0;
        loop(i,0,26) if(!res[i]) ans++;
        return ans;
    }
    int resres[26];
    copy(&res[0],&res[26],resres);  
    int first =solve(n-1,ch,resres);
    loop(i,0,26){
        if(ch[n][i]) res[i]--;
    }
    int resresres[26];
    copy(&res[0],&res[26],resresres);  
    int second = solve(n-1,ch,resresres);
    return max(first,second);
}

int main()
{
    //ios::sync_with_stdio(false);
    //cin.tie(nullptr);
    int i,j;
    int n,k;
    cin >> n>> k;
    bool ch[15][26] = {0};
    string s;
    loop(i,0,n){
        cin >> s;
        loop(j,0,s.size()) ch[i][int(s[j]-'a')] = true;
    }
    int res[26] = {k};
    for(auto& e:res) e = k;
    n--;   
    int ans = solve(n,ch,res);
    outans;
    return 0;
}
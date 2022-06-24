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
    int i,n,j;
    cin >> n;
    vector<vector<int>> abc(n,vector<int>(3));
    vector<vector<int>> happy(n+1,vector<int>(3,0));
    for(auto& e:abc) cin >> e[0] >> e[1] >> e[2];
    loop(i,0,n){
        loop(j,0,3){
            happy[i+1][(j+1)%3]=max(happy[i+1][(j+1)%3],happy[i][j] + abc[i][(j+1)%3]);
            happy[i+1][(j+2)%3]=max(happy[i+1][(j+2)%3],happy[i][j] + abc[i][(j+2)%3]);
        }
        //cout <<happy[i+1][0] <<happy[i+1][1] <<happy[i+1][2] << endl;
    }
    cout << max(happy[n][0],max(happy[n][1],happy[n][2])) << endl;
    
    return 0;
}
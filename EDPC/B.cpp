#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include<queue>
#include<climits>

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
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    queue<ll> nowplace;
    int place,costi;
    nowplace.push(0);
    int n,k,i;
    cin >> n >> k;
    vector<ll> h(n);
    vector<ll> cost(n,LLONG_MAX);
    cost[0] = 0;
    for(auto& e: h) cin >> e;
    //for(auto& e: h) cout << e << " ";
    while(!nowplace.empty()){
        place = nowplace.front();
        //cout << place << " " << cost[place] << endl;
        loop(i,place+1,place+k+1){
            if(i > n-1){
                break;
            }
            costi =cost[place] +abs(h[place]-h[i]);
            if(costi < cost[i]){
                cost[i] = costi;
                nowplace.push(i);
            }
        }
        nowplace.pop();
    }
    cout << cost[n-1] << endl;
    return 0;
}
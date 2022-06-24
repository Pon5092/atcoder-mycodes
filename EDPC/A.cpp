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
    //ios::sync_with_stdio(false);
    //cin.tie(nullptr);
    queue<ll> nowplace;
    int place,costo,costt;
    nowplace.push(0);
    int n;
    cin >> n;
    vector<ll> h(n);
    vector<ll> cost(n,LLONG_MAX);
    cost[0] = 0;
    for(auto& e: h) cin >> e;
    //for(auto& e: h) cout << e << " ";
    while(!nowplace.empty()){
        place = nowplace.front();
        //cout << place << " " << cost[place] << endl;
        if(place == n-1){
            nowplace.pop();
            continue;
        }
        costo = cost[place] +abs(h[place]-h[place+1]);
        //cout << costo << endl;
        if(costo < cost[place+1]){
            cost[place+1] = costo;
            nowplace.push(place+1);
        }
        if(place == n-2){
            nowplace.pop();
            continue;
        }
        costt = cost[place] +abs(h[place] - h[place +2]);
        //cout << costt << endl;
        if(costt < cost[place+2]){
            cost[place+2] = costt;
            nowplace.push(place+2);    
        }
        nowplace.pop();
    }
    cout << cost[n-1] << endl;
    return 0;
}
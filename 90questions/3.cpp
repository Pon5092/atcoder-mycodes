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
    int n,a,b;
    cin >> n;
    vector<vector<int>> branch(n);
    loop(i,0,n-1){
        cin >> a >> b;
        a--;
        b--;
        branch[a].push_back(b);
        branch[b].push_back(a);
    }
    vector<int> node(n,1000000009);
    queue<int> que;
    que.push(0);
    int place,lastplace=0;
    node[0]=0;
    while(!que.empty()){
        place =que.front();
        que.pop();
        for(auto e:branch[place]){
            if(node[place] < node[e]){
                que.push(e);
                node[e] = node[place]+1;
                lastplace = e;
            }
        }
    }
    //cout << lastplace << endl;
    int ans=0;
    for(auto& e:node) e =1000000009;
    que.push(lastplace);
    node[lastplace] =0;
    while(!que.empty()){
        place =que.front();
        que.pop();
        for(auto e:branch[place]){
            if(node[place] < node[e]){
                que.push(e);
                node[e] = node[place]+1;
                ans = node[e];
            }
        }
    }
    ans++;
    outans;
    return 0;
}
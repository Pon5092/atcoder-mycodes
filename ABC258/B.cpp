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
//const ll mod =  998244353;
//const ll mod = 1e9+7;

int main()
{
    //ios::sync_with_stdio(false);
    //cin.tie(nullptr);
    ll i,n;
    cin >> n;
    vector<vector<ll>> a(n,vector<ll>(n,0));
    
    for(auto& e:a){
        string p;
        cin >> p; 
        loop(i,0,n){
            e[i] = int(p[i]-'0');
        }
    }
    bool is_num=false;
    ll ans =0;
    vector<ll> judge(8,0);
    vector<pair<int,int>> way(8);
    way[0] ={0,1};
    way[1]={0,-1};
    way[2]={1,0};
    way[3]={-1,0};
    way[4]={1,1};
    way[5]={1,-1};
    way[6]={-1,1};
    way[7]={-1,-1};
    ll j,p,l,m;
    rloop(i,9,0){
        loop(l,0,n){
            loop(m,0,n){
                if(a[l][m] == i){
                    is_num = true;
                    for(auto& e:judge) e =0;
                    loop(j,0,8){
                        loop(p,0,n){
                            judge[j]*=10;
                            int x,y;
                            x=(l+way[j].first*p)%n;
                            if(x<0) x+=n;
                            y=(m+way[j].second*p)%n;
                            if(y<0) y+=n;
                            judge[j]+=a[x][y];
                        }
                        //cout << l << " "<< m <<" " <<judge[j] << endl;
                    }
                    ans = max(ans,*max_element(judge.begin(),judge.end()));
              }
            }
        }
        if(is_num) break;
    }
    outans;
    return 0;
}
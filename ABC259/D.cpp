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
    int i,j;
    ll n,sx,sy,tx,ty;
    cin >> n;
    cin >> sx >> sy;
    cin >> tx >> ty;
    vector<pair<ll,ll>> x(n);
    vector<ll> r(n);
    queue<int> que;
    vector<pair<bool,bool>> isis(n); //went,ends
    bool is_start,is_end;
    loop(i,0,n){
        cin >> x[i].first >> x[i].second >> r[i];
        if((x[i].first-sx)*(x[i].first-sx)+(x[i].second-sy)*(x[i].second-sy) == r[i]*r[i]){
            que.push(i);
            is_start = true;
        }
        if((x[i].first-tx)*(x[i].first-tx)+(x[i].second-ty)*(x[i].second-ty) == r[i]*r[i]){
            isis[i].second =1;
            is_end = true;
        }
    }
    if(!is_start || !is_end){
        outno;
        return 0;
    }
    vector<vector<int>> gra(n);
    
    ll rdis,par,rmdis;
    loop(i,0,n){
        loop(j,i+1,n){
            rdis =r[i] + r[j];
            rmdis = abs(r[i]-r[j]);
            par = (x[i].first-x[j].first)*(x[i].first-x[j].first)+ (x[i].second -x[j].second)*(x[i].second -x[j].second);
            if(rdis*rdis >= par && par >= rmdis*rmdis){
                gra[i].push_back(j);
                gra[j].push_back(i);
            }
        }
    }
    if(isis[que.front()].second){
        outyes;
        return 0;
    }
    ll place;
    while(!que.empty()){
        place =que.front();
        que.pop();
        for(auto e:gra[place]){
            if(isis[e].second){
                outyes;
                return 0;
            }
            else if(!isis[e].first){
                isis[e].first = true;
                que.push(e);
            }
        }
    }   
    outno;
    return 0;
}
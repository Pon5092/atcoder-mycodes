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
#define outans std::cout << ans << endl;
//const ll mod =  998244353;
//const ll mod = 1e9+7;

int main()
{
    //ios::sync_with_stdio(false);
    //cin.tie(nullptr);
    vector<ll> h(4),w(4);
    cin >> h[0] >> h[1] >> h[2] >> w[0] >> w[1] >> w[2];
    ll wo[4],we[4];
    ll ans=0;
    ll a,b,c,d,e,f;
    if(h[0]+h[1]+h[2] != w[0]+w[1]+w[2]){ cout << 0 << endl; return 0;}
    loop(a,1,h[0]){
        wo[0] = w[0]-a;
        if(wo[0] <=0) break;
        loop(b,1,h[0]){
            wo[1] = w[1]-b;
            if(wo[1] <=0) break;
            c=h[0]-a-b;    
            if(c <=0) continue;
            wo[2] = w[2]-c;
            //cout << a << b << c << endl;
            //cout << wo[0] << wo[1] << wo[2] << endl << endl;
            if(wo[2] <=0) continue;
            loop(d,1,h[1]){
                we[0] = wo[0]-d;
                if(we[0] <=0) break;
                loop(e,1,h[1]){
                    we[1] = wo[1]-e;
                    if(we[1] <=0) break;
                    f=h[1]-d-e;
                    if(f <=0) continue;    
                    we[2] = wo[2]-f;
                    if(we[2] <=0) continue;
                    //cout << d << e << f << endl;
                    if(we[0]+we[1]+we[2] == h[2])ans++;
                }
            }
        }
    }
    outans;
    return 0;
}
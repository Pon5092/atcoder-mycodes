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
    ll i,n;
    cin >> n;
    vector<bool> sosuu(int(min(n,ll(1e6))),true);
    vector<ll> three(int(min(n,ll(1e6))),0);
    sosuu[0] = 0;
    sosuu[1] = 0;
    int nlook = 2,ndelete;
    int size = sosuu.size();
    while(nlook <size){
        if(sosuu[nlook]){
            ndelete = nlook*2;
            while(ndelete <size){
                sosuu[ndelete] = false;
                ndelete+=nlook;
            }
        }
        nlook++;
    }
    loop(i,0,size){
        if(sosuu[i]){
            three[i] = i*i*i;
        }
    }
    ll l=0,r,ans=0;
    while(l < size){
        if(sosuu[l]){
            r = l+1;
            while(r < size){
                if(sosuu[r]){
                    if(n >= l*three[r]) ans++;
                    if(n < l*three[r]) break;
                }
                r++;
            }
        }
        l++;
        if(n < three[l]*l) break;
    }
    outans;
}
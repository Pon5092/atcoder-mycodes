#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include<numeric>

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
    ll i;
    ll n,q,x,k;
    cin >> n >> q >> x;
    vector<ll> w(2*n,0);
    loop(i,0,n) cin >> w[i];
    ll sum,p;
    ll wsum = accumulate(w.begin(),w.end(),0ll);
    ll countins = 0;
    if(wsum <=x){
        countins = (x/wsum)*n;
        x%=wsum;
    }
    vector<vector<ll>> boxup(31,vector<ll> (n,countins));
    copy(w.begin(),w.begin()+n,w.begin()+n);
    sum=0;
    p=0;
    loop(i,0,n){
        if(p<i){
            p=i;
            sum=0;
        }
        while(sum<x){
            sum+=w[p];
            p++;
        }
        boxup[0][i] += p-i;
        sum-=w[i];
    }
    //for(auto e:boxup[0]) cout << e << " ";
    //cout << endl;
    ll in,j;
    loop(i,1,31){
        loop(j,0,n){
            in = boxup[i-1][j];
            in+=boxup[i-1][(j+in)%n];
            boxup[i][j] = in;
        }
    }
    vector<ll> looper(n,-1);
    i=0;
    p=0;
    //cout << "looppoints:";
    while(looper[p] == -1){
        looper[p] = i;
        p+=boxup[0][p];
        i++;
        p%=n;
        //cout << p <<" ";
    }
    //cout << endl;
    //cout << "loop:" << looper[p] << "-" << i << endl;
    ll ans;
    ll ansl =0;
    ll ansi=i;
    while(q--){
        cin >>k;
        k--;
        ansl=0;
        if(k > ansi){
            k-=looper[p];
            k%=ansi-looper[p];
            ansl = p;
        }
        loop(i,0,31){
            if(k & 1){
                ansl+=boxup[i][ansl];
                ansl%=n;
            }
            k>>=1;
            if(!k) break;
        }
        //cout << ansl << endl;
        ans=boxup[0][ansl%n];
        outans;
    }
    return 0;
}
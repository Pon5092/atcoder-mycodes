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
    vector<ll> v(120,0);
    int i,n,k;
    cin >> n;
    ll ans=0;
    vector<ll> a(n);
    loop(i,0,n){
        cin >> a[i];
    }
    loop(i,0,n){
        v[i+1]=v[i] +a[n-i-1];
    }
    loop(i,0,n+1){
        if(v[i] >= 4) ans++;
    }
    outans;
    return 0;
}
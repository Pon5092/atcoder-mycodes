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
    int i,j;
    int n,t,b,ic;
    cin >> n >> ic;
    vector<bool>  a(32);
    vector<vector<pair<bool,bool>>>  asum(n+1,vector<pair<bool,bool>> (32,{0,1}));

    vector<bool> c(32);
    loop(i,0,32){
        if(ic & 1){
            c[i] = 1;
        }else {
            c[i] = 0;
        }
        ic>>=1;
    }
    loop(i,0,n){
        cin >> t >> b;
        loop(j,0,32){
            if(b & 1){
                a[j] = 1;
            }else {
                a[j] = 0;
            }
            b>>=1;
        }
        if(t == 1){
            loop(j,0,32){
                asum[i+1][j] = {asum[i][j].first & a[j],asum[i][j].second & a[j]};
            }
        }else if(t == 2){
            loop(j,0,31){
                asum[i+1][j] = {asum[i][j].first | a[j],asum[i][j].second | a[j]};
            }
        }else {
            loop(j,0,31){
                asum[i+1][j] = {asum[i][j].first ^ a[j],asum[i][j].second ^ a[j]};
            }
        }
    }
    int ans=0;
    loop(i,0,n){
        loop(j,0,32){
            if(c[j]){
                c[j] = asum[i+1][j].second;
            }else{
                c[j] = asum[i+1][j].first;
            }
        }
        ans =0;
        rloop(j,31,-1){
            ans<<=1;
            ans += c[j];
        }
        outans;
    }
    
    return 0;
}
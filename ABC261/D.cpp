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
    int n,m;
    cin >> n >> m;
    vector<int> x(n);
    for(auto& e:x) cin >> e;
    int ic,iy;
    vector<int> cy(n+3,0);
    loop(i,0,m){
        cin >> ic >> iy;
        cy[ic] = iy;
    }
    //cout << endl;
    vector<vector<ll>> che(n+1,vector<ll> (n+1,0));
    loop(i,0,n){
        //cout << "start ";
        loop(j,0,i+1){
            che[i+1][0] = max(che[i][j],che[i+1][0]);
            che[i+1][j+1] =max(che[i][j]+x[i],che[i+1][j+1]);
        }
        //for(auto e:che[i+1]) cout << e << " ";
        //cout << endl << "final ";
        loop(j,0,n+1){
            if(che[i+1][j] != 0) che[i+1][j]+= cy[j];
            //cout << che[i+1][j] << " ";
        }
        //cout << endl;
    }
    ll ans = *max_element(che[n].begin(),che[n].end());
    cout << ans << endl;

    return 0;
}
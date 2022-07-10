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
    int i;
    int n,m,x,t,d;
    cin >> n >> m >>  x>> t >> d;
    if(x <=m) {
        cout << t << endl;
        return 0;
    } else{
        int first = t-x*d;
        cout << first + d * m<< endl;
    }
    return 0;
}
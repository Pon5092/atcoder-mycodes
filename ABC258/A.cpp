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
    int i,t;
    cin >> t;
    if(t >= 60){
        cout << "22:";
        if(t-60 < 10){
            cout << "0";
        }
        cout << t-60 << endl;
    }
    else {
        cout <<"21:";
        if(t<10){
            cout << "0";
        }
        cout << t << endl;
    }
    return 0;
}
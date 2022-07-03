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
    int n,q,x,y;
    string s;
    int startp=0;
    cin >> n >> q;
    cin >> s;
    while(q--){
        cin >> y >> x;
        if(y==1){
            startp = (startp-x)%n;
            if(startp<0) startp+=n;
            //cout << startp <<"\n";
        }else{
            x--;
            //cout << (startp+x)%n <<"\n";
            cout << s[(startp+x)%n] << "\n";
        }
    }
    return 0;
}
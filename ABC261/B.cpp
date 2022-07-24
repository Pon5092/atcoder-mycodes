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
    int n;
    cin >> n;
    vector<vector<char>> a(n, vector<char>(n));
    for(auto& e:a){
        for(auto& l:e) cin >> l;
    }
    char r,l;
    loop(i,0,n){
        r = a[i][i];
        if(r != '-'){
            cout << "incorrect" << endl;
            return 0;
        }
        loop(j,i+1,n){
            r = a[i][j];
            l = a[j][i];
            if(!((r == 'W' && l == 'L') || (r == 'D' && l == 'D') || (r == 'L' && l == 'W'))){
                cout << "incorrect" << endl;
                return 0;
            }
        }
    }
    cout << "correct"<< endl;
    return 0;
}
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
#include <iomanip>
#include <limits>
//const ll mod =  998244353;
//const ll mod = 1e9+7;

int main()
{
    //ios::sync_with_stdio(false);
    //cin.tie(nullptr);
    int i;
    const double PI = 3.14159265359;
    double x,y,d;
    cin >> x >> y >> d;
    if(x == 0 && y == 0){
        cout  << std::setprecision(15)<< 0.00000000000000000000  << " " << 0.00000000000000000000 << endl;
        return 0;
    }
    double r,sea;   
    r = sqrt(x*x+y*y);
    sea = atan(y/x);
    if(x <0){
        sea+=PI;
    }
    sea+= (d*PI)/180.0;
    x = r * cos(sea);
    y = r * sin(sea);
    sea-=(d*PI)/180.0;
    std::cout << std::setprecision(15) << x << " " << y << endl;
    return 0;
}
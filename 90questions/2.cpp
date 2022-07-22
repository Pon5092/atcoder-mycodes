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


void salve(int left, int stack,string s){
    if(!left && !stack) cout << s << endl;
    if(left){
        s.push_back('(');
        salve(left-1,stack+1,s);
        s.pop_back();
    }
    if(stack){
        s.push_back(')');
        salve(left,stack-1,s);
        s.pop_back();
    }
}


int main()
{
    //ios::sync_with_stdio(false);
    //cin.tie(nullptr);
    int i;
    int n;
    ;
    cin >> n;
    if(n & 1){
        return 0;
    }
    n>>=1;
    string s = "";
    salve(n,0,s);
    return 0;
}
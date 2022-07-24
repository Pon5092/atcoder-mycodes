#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include<queue>
#include<unordered_map>

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
    int i;
    unordered_map<string,int> umap;
    string now;
    int n;
    cin >> n;
    while(n--){
        cin >> now;
        if(umap.count(now)){
            umap[now]++;
            cout << now << "(" << umap[now] << ")" << endl;
        }else {
            cout << now << endl;
            umap.emplace(now,0);
        }
    }

    return 0;
}
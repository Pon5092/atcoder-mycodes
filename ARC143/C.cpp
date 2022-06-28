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
    int n,x,y;
    cin >> n >> x >> y;
    vector<int> a(n);
    for(auto& e:a) cin >> e;

    for(auto& e:a) e%=(x+y);
    
    int xpoint =n-1,ypoint=0;
    int big = max(x,y);
    int mini = min(x,y);
    bool wich = ((x == big) && x != y);
    x = big;
    y = mini;
    sort(a.begin(),a.end());
    if(*a.rbegin() == 0) {
        cout << "Second" << endl;
        return 0;
    }
    while(xpoint >=0 && ypoint < n){
        while(xpoint >=0 && a[xpoint] < x) xpoint--;
        if(xpoint  < 0) break;
        if(a[xpoint] >= x)a[xpoint]-=x;
        while(ypoint <n && a[ypoint] < y) ypoint++;
        if(a[ypoint] >= x)a[ypoint]-=y;
        
    }
    if(wich &&xpoint == -1) cout << "Second" << endl;
    else if(wich &&ypoint == n) cout << "First" << endl;
    else if(!wich &&xpoint == -1) cout << "First" << endl;
    else if(!wich &&ypoint == n) cout << "Second" << endl;
    return 0;
}
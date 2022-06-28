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
    int i,n,q,x,place,bace,plus;
    cin >> n >> q;
    vector<int> table(n);
    vector<int> coder(n);
    loop(i,0,n){
        table[i] = i;
        coder[i] = i;
    }
    while(q--){
        cin >> x;
        x--;
        place = coder[x];
        bace = table[place];
        if(place !=n-1)plus = table[place+1];
        else plus = table[place-1];
        table[place] = plus;
        if(place !=n-1) {
            table[place+1]=bace;
            coder[bace]++;
            coder[plus]--;
        } else {
            table[place-1] = bace;
            coder[bace]--;
            coder[plus]++;
        }
    }
    cout << table[0]+1;
    loop(i,1,n){
        cout << " "<< table[i]+1;
    }
    cout << endl;
}
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
    int i,j;
    int n,k,q,p,place,found;
    bool islast;
    cin >> n >> k >> q;
    vector<bool> a(n,0);
    loop(i,0,k){
        cin >> p;
        a[p-1] = true;
    }
    loop(i,0,q){
        cin >> p;
        islast =false;
        found =0;
        place =0;
        while(found < p){
            found +=a[place];
            place++;
            if(place == n) {
                islast = true;
                break;
            }
        }
        place--;
        //cout << place+1 << endl;
        if(!islast && !a[place+1]){
            a[place] = false;
            a[place+1] =true;
        }
    }
    loop(i,0,n){
        if(a[i]){
            cout << i+1;
            break; 
        }
    }
    loop(i,i+1,n){
        if(a[i]){
            cout << " "<< i+1 ; 
        }
    }
    cout << endl;
    return 0;
}
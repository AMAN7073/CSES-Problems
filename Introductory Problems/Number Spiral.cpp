#include <bits/stdc++.h>
using namespace std;
 
#define ll long long int
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i, a, b) for (int i = a; i < b; i++)
 
typedef vector<int> vi;
typedef pair<int, int> pi;
 
long long binpow(long long a, long long b) {
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a;
        a = a * a;
        b >>= 1;
    }
    return res;
}
 
int main(){
    ll t;cin>>t;
    while(t--){
        ll x,y;
        cin>>x>>y;
        if(x<y){
            ll ans;
            if(y%2 != 0)
                ans = (y*y)-x+1;
            else
                ans = ((y-1)*(y-1))+x;
            cout<<ans<<endl;
        }
        else{
            ll ans;
            if(x%2!=0)
                ans = ((x-1)*(x-1))+y;
            else
                ans = (x*x)-y+1;
            cout<<ans<<endl;
        }
    }
    return 0;
}

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
    ll n;cin>>n;
    ll array[n];
    for(int i=0;i<n;i++)
        cin>>array[i];
   ll best = 0, sum = 0;
    for (ll k = 0; k < n; k++) {
        sum = max(array[k],sum+array[k]);
        best = max(best,sum);
    }
    if(best == 0){
        sort(array,array+n);
        best = array[n-1];
    }
    cout << best << "\n";
}

#include <bits/stdc++.h>
using namespace std;
 
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define forn(i, a, b) for (int i = a; i < b; i++)
 
typedef vector<int> vi;
typedef pair<int, int> pi;
typedef long long ll;
typedef long double ld;
typedef complex<ld> cd;
 
typedef pair<int, int> pi;
typedef pair<ll,ll> pl;
typedef pair<ld,ld> pd;
 
typedef vector<int> vi;
typedef vector<ld> vd;
typedef vector<ll> vl;
typedef vector<pi> vpi;
typedef vector<pl> vpl;
typedef vector<cd> vcd;
const int MOD = 1000000007;
const ll INF = 1e18;
const int MX = 100001;
 
long long binpow(long long a, long long b,long long n) {
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = (res * a)%n;
        a = (a * a)%n;
        b >>= 1;
    }
    return res;
}
 
 
int main(){
    ll n,m,k,count=0;cin>>n>>m>>k;
    ll a[n],b[n];
    forn(i,0,n)
        cin>>a[i];
    forn(i,0,m)
        cin>>b[i];
    int j=0;
    sort(a, a +n);
    sort(b, b+m);
    forn(i,0,m){
        for(;j<n;){  
            if(a[j]+k >= b[i] && b[i] >= a[j] - k){
                count++;
                j++;
                break;
            }
            else{
                if(b[i] < a[j]){
                    //j++;
                    break;
                }   
            }
            j++;
        }
    }
   cout<<count<<endl;
    
}

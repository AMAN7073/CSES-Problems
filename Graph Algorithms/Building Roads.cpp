#include <bits/stdc++.h>
using namespace std;
 
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define forn(i, a, b) for (long long i = a; i < b; i++)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define mid(l,r)        (l+(r-l)/2)
 
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
 
 
vector<vector<int>> adj;
int n;
vector<int> comp;
vector<bool> visited;
 
void dfs(int v) {
    //cout<<4587;
    visited[v] = true;
    for (int u : adj[v]) {
        if (!visited[u])
            dfs(u);
    }
}
 
void find_comps() {
    for (int i = 0; i < n ; ++i)
        visited [i] = false;
    for (int i = 0; i < n ; ++i){
        if (!visited[i]) {
            //cout<<1254;
            comp.PB(i+1);
            dfs(i);
        }
    }
}
 
int main(){
    ll m;
    cin>>n>>m;
    adj.resize(n);
    visited.resize(n);
    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        adj[x-1].PB(y-1);
        adj[y-1].PB(x-1);
    }
    find_comps();
    cout<<comp.size()-1<<endl;
    int k = comp.size();
    if(k-1){
        for(int i=0;i<k-1;i++){
            cout<<comp[i]<<" "<<comp[i+1]<<endl;
        }
    }
}

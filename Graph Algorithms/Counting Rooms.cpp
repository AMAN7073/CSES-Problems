#include <bits/stdc++.h>
using namespace std;
 
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define forn(i, a, b) for (long long i = a; i < b; i++)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
 
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
 
 
char ar[1001][1001];
bool vis[1001][1001];
int n,m;
 
bool isValid(int x,int y){
    if(x < 1 || x > n || y < 1 || y > m)
        return false;
    if(vis[x][y] == true || ar[x][y] == '#')
        return false;
    return true;
}
 
void dfs(int x,int y){
    vis[x][y] = true;
 
    if(isValid(x-1 , y))
        dfs(x-1,y);
    if(isValid(x , y-1))
        dfs(x,y-1);
    if(isValid(x , y+1))
        dfs(x,y+1);
    if(isValid(x+1 , y))
        dfs(x+1,y);
}
 
 
int main(){
    cin>>n>>m;
    forn(i,1,n+1){
        forn(j,1,m+1)
            cin>>ar[i][j];
    }
    ll cnt = 0;
    forn(i,1,n+1){
        forn(j,1,m+1)
            if(ar[i][j] == '.' && vis[i][j] == false){
                dfs(i,j);
                cnt++;
            }
    }
    cout<<cnt<<"\n";
 
}

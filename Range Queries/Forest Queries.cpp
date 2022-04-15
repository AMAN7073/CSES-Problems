#include <bits/stdc++.h>
#include <limits.h>
using namespace std;
    
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define forn(i, arr, b) for (long long i = arr; i < b; i++)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define mid(l,r)        (l+(r-l)/2)
#define all(x) x.begin(), x.end()
#define eb emplace_back
#define dtb(n,x) bitset<n>(x).to_string()
#define inp(arr, n)  for(ll i = 0; i < n; i++) cin >> arr[i]
#define inp_1(arr, n)  for(ll i = 1; i <= n; i++) cin >> arr[i]
    
typedef vector<int> vi;
typedef pair<int, int> pi;
typedef long long ll;
typedef long double ld;
typedef complex<ld> cd;
typedef pair<int, int> pi;
    
const int MOD = 1e9 + 7;
const ll INF = 1e18;
const int MX = 100001;
    
int power(long long x, unsigned int y, int p = MOD){
  int res = 1;
  x = x % p; 
  if (x == 0) return 0; 
  while (y > 0){
    if (y & 1)
      res = (res*x) % p;
    y = y>>1;
    x = (x*x) % p;
  }
  return res;
}
    
vector <bool> prime;
    
void SieveOfEratosthenes(long long n){
  prime.assign(n+1,true);
  for (int p = 2; p * p <= n; p++){
    if (prime[p] == true){
      for (int i = p * p; i <= n; i += p)
        prime[i] = false;
    }
  }
  prime[1] = false;
}
 
bool grid[1001][1001];
int dp[1001][1001];
 
void build_dp(int n, int m)
{
    dp[0][0] = dp[1][0] = dp[0][1] = 0;
 
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
            dp[i][j] = grid[i][j] + dp[i][j-1] + dp[i-1][j] - dp[i-1][j-1];
    }
}
 
int getDP(int x, int y)
{
    return dp[x][y];
}
 
int query(int x1, int y1, int x2, int y2)
{
    return getDP(x2,y2) - getDP(x2,y1-1) - getDP(x1-1,y2) + getDP(x1-1,y1-1);
}
 
int main() {
   FAST
   int n,q;
   cin >> n >> q;
 
   for(int i = 1; i <= n; i++)
   {
       for(int j = 1; j <= n; j++)
       {
           char ch;
           cin >> ch;
           if(ch == '*')
                grid[i][j] = 1;
           else grid[i][j] = 0;
       }
   }
 
   build_dp(n,n);
 
   while(q--)
   {
            int x1,x2,y1,y2;
            cin >> x1 >> y1 >> x2 >> y2;
            cout << query(x1,y1,x2,y2) << '\n';
   }
   return 0;
}

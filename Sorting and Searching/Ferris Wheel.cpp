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
 
int main() {
  int n, w;
  cin >> n >> w;
  vector<int> a(n);
  for (int i = 0; i < n; i++) cin >> a[i];
  sort(a.begin(), a.end());
  int i = 0;
  int j = n - 1;
  int c = 0;
  while (i <= j) {
    if (a[j] + a[i] > w) j--;
    else { i++; j--; }
    c++;
  }
  cout << c << endl;
}

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    //FAST
    int t = 1;
    //cin >> t;
    while (t--) {
      int n,x;
      cin>>n>>x;
 
      vector<int> Weights(n),Values(n);
      for (int i = 0; i < n; ++i)
        cin>>Weights[i];
 
      for (int i = 0; i < n; ++i)
        cin>>Values[i];
 
    vector<vector<int>> DP(n + 1 , vector<int> (x + 1 , 0));
    for (int i = 1; i <= n; ++i)
    {
      int W = Weights[i-1] , V = Values[i-1];
      for (int j = 0; j <= x; ++j)
      {
        DP[i][j] = DP[i-1][j];
        if(j >= W && (DP[i-1][j-W] + V > DP[i][j])){
          DP[i][j] = DP[i-1][j-W] + V;
        }
      }
    }
    cout<<DP[n][x]<<endl;
    }
}

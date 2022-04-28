#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k=1;cin>>n;
   map<int, int> mp;
   for(int i=0;i<n;i++){
       int x;
       cin>>x;
       mp[x] = i;
   }
   int a = mp.at(1);
   for(int i=2;i<=n;i++){
       int x = mp.at(i);
       if(x<a)
        k++;
    a = x;
   }
    cout<<k<<endl;
        
}

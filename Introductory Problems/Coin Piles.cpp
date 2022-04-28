#include <bits/stdc++.h>
using namespace std;
 
 
int main()
{
    long int t;cin>>t;
    while(t--){
        long long int a,b;cin>>a>>b;
        long long int z = max(a,b) - min(a,b);
        long long int x = max(a,b) - 2*z;
        long long int y = min(a,b) - z;
        if(x >=0 && y >=0 && x == y && x%3 == 0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    
}

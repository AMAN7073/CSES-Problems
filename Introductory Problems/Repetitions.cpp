#include <bits/stdc++.h>
using namespace std;
#define ll long long int
 
int main(){
    string n;
    cin>>n;
    ll sum=1;
    ll maxi=0;
    if(n.length() == 1){
        cout<<1<<" \n";
        exit(0);
    }   
    for(int i=0;i<n.length()-1;i++){
        char x = n[i];
        if(x == n[i+1])
            sum++;
        else    sum=1;
        maxi = max(maxi,sum);
        
    }
   cout<<maxi<<" \n";
}

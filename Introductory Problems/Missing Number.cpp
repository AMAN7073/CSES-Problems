#include <bits/stdc++.h>
using namespace std;
#define ll long long int
 
int main(){
    ll n;cin>>n;
    ll sum=0;
    for(int i=0;i<n-1;i++){
        ll x;cin>>x;sum += x;
    }
    ll y = (n*(n+1))/2;
    cout<<y-sum;
    cout<<"\n";
}

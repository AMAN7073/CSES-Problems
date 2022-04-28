#include <bits/stdc++.h>
using namespace std;
 
int main(){
    long long int n;cin>>n;
    long long int a[n];
    for(long long int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    long long int b =1;
    for(long long int i=0;i<n;i++){
        if(b<a[i])
            break;
        else    
            b += a[i];
    }
 
    cout<<b<<endl;
}

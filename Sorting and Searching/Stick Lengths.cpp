#include <bits/stdc++.h>
using namespace std;
 
int main(){
    long long int n;cin>>n;
    long long int a[n],sum =0;
    for(long long int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    long long int x = a[n/2];
    for(int i=0;i<n;i++)
        sum += abs(a[i] - x);
    cout<<sum;
}

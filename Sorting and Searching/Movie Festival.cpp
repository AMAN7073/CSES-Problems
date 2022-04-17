#include <bits/stdc++.h>
using namespace std;
 
void pairsort(int a[], int b[], int n)
{
    pair<int, int> pairt[n];
  
    for (int i = 0; i < n; i++) 
    {
        pairt[i].first = a[i];
        pairt[i].second = b[i];
    }
  
    sort(pairt, pairt + n);
      
    for (int i = 0; i < n; i++) 
    {
        a[i] = pairt[i].first;
        b[i] = pairt[i].second;
    }
}
 
int main(){
    int k,count=1;cin>>k;
    int a[k],b[k];
    for(int i=0;i<k;i++){
        cin>>b[i]>>a[i];
    }
 
    int n = sizeof(a) / sizeof(a[0]);
    pairsort(a, b, n);
 
    for(int i=0;i<n-1;i++){
        for(int j=0; i+1+j < n ;j++){
            if(a[i] <= b[i+1+j]){
                count++;
                i = i+j;
                break;
            }
            if(i+1+j == n-1){
                cout<<count<<endl;
                exit(0);
            }
        }
        
    }
    cout<<count<<endl;
 
}

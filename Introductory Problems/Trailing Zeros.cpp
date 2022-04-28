#include <bits/stdc++.h>
using namespace std;
 
 
int main()
{
    long int n;cin>>n;
    int count = 0;
    for(int i=5;n/i>=1;i *=5){
        count = count + n/i;
    }
 
    cout<<count;
    
}

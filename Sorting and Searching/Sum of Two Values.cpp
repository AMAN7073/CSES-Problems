#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k;cin>>n>>k;
    map<int, int> am;
    for(int i=0;i<n;i++){
        int b;
        cin>>b;
        if(am.find(k-b)!= am.end()){
            cout<<am[k-b] + 1 <<" "<< i+1;
            return 0;
        }
        am[b] = i;
    }
    
    cout<<"IMPOSSIBLE";
}

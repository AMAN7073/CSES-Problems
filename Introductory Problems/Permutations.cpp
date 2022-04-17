#include <bits/stdc++.h>
using namespace std;
 
#define ll long long int
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i, a, b) for (int i = a; i < b; i++)
 
typedef vector<int> vi;
typedef pair<int, int> pi;
 
int main(){
    ll n;cin>>n;
    if(n == 1)
        cout<<1<<endl;
    else if(n == 2 || n == 3)
        cout<<"NO SOLUTION"<<endl;
    else if(n ==4){
        cout<<2<<" "<<4<<" "<<1<<" "<<3<<endl;
    }
    else{
        for(int i=1;i<=n;i= i+2)
            cout<<i<<" ";
        for(int i=2;i<=n;i=i+2)
            cout<<i<<" ";
    }
}

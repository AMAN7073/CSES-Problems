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
    vi a;
    REP(i,0,n){
        ll x;
        cin>>x;
        a.PB(x);
    }
    ll sum = 0;
    REP(i,0,n-1){
        if(a[i+1] >= a[i])
            continue;
        else{
            sum += abs(a[i+1] - a[i]);
            a[i+1] = a[i];
        }
    }
    cout<<sum<<endl;
}

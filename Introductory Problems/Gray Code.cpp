#include <bits/stdc++.h>
using namespace std;
 
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;cin>>n;
    string a = "";
    long int temp = n;
    while(temp>0){
        a = a + to_string(temp % 2);
        temp = temp/2;
    }
    reverse(a.begin(),a.end());
    long int x= a.length();
    for(long int i=0;i < n - x ;i++)
            a = a + "0";
    x = a.length();
    //cout<<a<<endl;
    for(long int i=0;i<x;i++)
        cout<<"0";
    cout<<endl;
    for(long int i=1;i<pow(2,n);i++){
        a = "";
        temp = i;
        while(temp>0){
            a = a + to_string(temp % 2);
            temp = temp/2;
        }
        reverse(a.begin(),a.end());
        string temp="";
        for(long int k=0;k < x - a.length();k++){
            temp = temp + "0";}
       a=temp+a;
       cout<<a.at(0);
      for(long int j =0;j<=x-2;j++){
            if(a[j] == a[j+1])
                cout<<"0";
            else
                cout<<"1";
        }
        cout<<endl;
    }
}

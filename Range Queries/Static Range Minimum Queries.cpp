#include <bits/stdc++.h>
using namespace std;

#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
const long long MX = 1e18;

const int N = 200001;
long long Segment_Tree[4*N];
long long Arr[N];

long long build(int Index , int Left , int Right){

  if (Left == Right)
  {
    return Segment_Tree[Index] = Arr[Left];
  }
  else{
    int Mid = (Left + Right) / 2;
    return Segment_Tree[Index] = min(build(2*Index + 1 , Left , Mid),build(2*Index + 2, Mid + 1 , Right));
  }
}

long long Sum_Query(int Index , int Total_Left , int Total_Right , int Left , int Right){

  if (Left > Right)
    return MX;

  if (Total_Left == Left and Total_Right == Right)
    return Segment_Tree[Index];

  int Total_Mid = (Total_Left + Total_Right) / 2;
  return min(Sum_Query(2*Index + 1 , Total_Left , Total_Mid , Left , min(Right , Total_Mid))
  ,Sum_Query(2*Index + 2 , Total_Mid + 1 , Total_Right , max(Left , Total_Mid + 1) , Right));
}

int main() {
  FAST
  int t = 1;
  //cin >> t;
  while (t--) {
    long long n,m;
    cin>>n>>m;

    for (int i = 0; i < n; ++i)
    {
      cin>>Arr[i];
    }

    build(0 , 0 , n-1);
    while(m--){
      //cout<<m<<endl;
      int u,v;
      cin>>u>>v;

      cout<<Sum_Query(0 , 0 , n-1 , u-1 , v-1)<<endl;
    }
  }
}

#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int yeyenum[505][505];
int bloggium[505][505];
int dp[505][505];
int n,m;

void solve(){

    memset( &dp[0][0], 0, sizeof(dp) );

    for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
        if(j>0) yeyenum[i][j]+=yeyenum[i][j-1];
      }
    }

    for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
        if(i>0) bloggium[i][j]+=bloggium[i-1][j];
      }
    }

    for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
          int var1 = bloggium[i][j];
          int var2 = yeyenum[i][j];
          if(j>0) var1 += dp[i][j-1];
          if(i>0) var2 += dp[i-1][j];
          dp[i][j] = max(var1,var2);
      }
    }
cout<<dp[n-1][m-1]<<endl;
  return;
}


int main(){

while(true){
  cin>>n>>m;
  if (n == 0 && m == 0){
            break;
    }
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      cin>>yeyenum[i][j];
    }
  }

  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      cin>>bloggium[i][j];
    }
  }
solve();
}
  return 0;
}

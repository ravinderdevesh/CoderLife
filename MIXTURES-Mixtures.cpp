#include<bits/stdc++.h>
using namespace std;
int coins[]={1,2,5,20,1000};
int n;
void solve(int coins[],int size,int n){
  int dp[1000];
  memset(dp,n,9999);
  dp[0]=0;
  for(int i=1;i<=n;i++){
    for(int j=0;j<size;j++){
        if(coins[j]<=i && dp[i-coins[j]]+1 < dp[i])
          dp[i]=dp[i-coins[j]]+1;
    }
  }
cout<<dp[n]<<endl;
}

int main(){
  int t;
  cin>>t;
  while(t--){
    cin>>n;
    solve(coins,5,n);
  }
  return 0;
}

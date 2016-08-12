#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int mincoin[1000];

void mincoinneeded(int coins[],int n,int sum){
  fill(mincoin,mincoin+sum+1,9999);
  mincoin[0]=0;
  for(int i=1;i<=sum;i++){
      for(int j=0;j<n;j++){
          if(coins[j]<=i){
            if(mincoin[i]>mincoin[i-coins[j]]+1){
                mincoin[i]=mincoin[i-coins[j]]+1;
                }
            }
        }
  }
  cout<<mincoin[sum]<<endl;
}

int main(){
  int coins[4]={1,2,5,10};
  int sum = 20;
  mincoinneeded(coins,4,sum);
  return 0;
}

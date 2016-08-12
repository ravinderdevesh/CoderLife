#include<bits/stdc++.h>
using namespace std;
void allfibonacciless(int n){
int arr[1000]={0};
arr[0]=1;
arr[1]=1;
cout<<arr[0]<<" ";
for(int i=2;arr[i-1]<=n;i++){
  arr[i]=arr[i-1]+arr[i-2];
  cout<<arr[i-1]<<" ";
}
cout<<endl;
}

void nthfibonacci(int n){
int a=1,b=1,c=0;
for(int i=1;i<n-1;i++){
  c = a + b;
  a=b;
  b=c;
}
  cout<<c<<endl;

}


int main(){
  allfibonacciless(50);
  nthfibonacci(15);
  return 0;
}

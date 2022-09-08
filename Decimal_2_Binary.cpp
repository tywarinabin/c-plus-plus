#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,i=0,j;
  cout<<"Enter the number: "<<endl;
  cin>>n;
  int arr[n];
  while(n>0){
    arr[i] = n%2;
    i++;
    n = n/2;
  }
  j = i-1;
  while(j>=0){
    cout<<arr[j];
    j--;
  }
return 0;
}
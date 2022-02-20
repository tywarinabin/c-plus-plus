#include<iostream>
using namespace std;
// int add(int a,int b){
//     int  c = a+b;
//     return c;

int main(){
//     int a,b;
// cout << "Enter two integers:  " <<endl;
// cin>>a;
// cin>>b;
// cout<<"The sum of two numbers is "<<add(a,b);
int arr[5];
for(int i =0;i<5;i++){
  cout<<"Enter "<<i+1<<" element of arr[20]" <<endl;
    cin>>arr[i];
}
cout<<"The entered arrays are "<<endl;
for (int i=0;i<5;i++){
    cout<<" "<<arr[i]<<endl;
}
 return 0;   
}
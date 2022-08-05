#include<bits/stdc++.h>
using namespace std;
int main(){
  int num,den,result;
  cout<<"Enter two numbers: "<<endl;
  cin>>num>>den;
  try{
    if(den == 0){
        throw den;
    }
   result = num/den;
  
  }
  catch (int n1){
    cout<<"Exception Occured: Number can't divided by Zero.(( " <<n1<<" ))"<<endl;
  }
  cout<<result<<endl;
  cout<<&den<<endl;
  
return 0;
}
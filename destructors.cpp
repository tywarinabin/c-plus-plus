#include<iostream>
using namespace std;
class number{
int a,b;
public:
static int count;
number(){
count++;
cout<<"The numbers are a and b of turn. "<<count<<endl;
}
~number(){
    cout<<"Destructor is called..."<<endl;
}
void showhere(){
    cout<<"The value of a= "<<a<<" and value of b = "<<b<<endl;
}
};
int number :: count;
int main(){
    number n1;
    n1.showhere();

return 0;
}
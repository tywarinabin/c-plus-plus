#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter size of an array"<<endl;
    cin>>n;
   int *ptr = new ( nothrow ) int[n];
   if(!ptr ){
       cout<<"Memory failed"<<endl;
   }
   else {
       cout<<"Memory allocation successfully allocated"<<endl;
       for(int i = 0;i<n;i++){
           cin>>ptr[i];
       }
        for(int i = 0;i<n;i++){
           cout<<ptr[i]<<" " ;
       }
      delete ptr;
   }
    return 0;
}

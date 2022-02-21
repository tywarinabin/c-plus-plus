#include<iostream>
using namespace std;
class mother{
public:
void suggest(){
    cout<<"Ghara kaile aauxas ta tah ?"<<endl;
}
};
class father {
public:
void suggest(){
    cout<<"Ani college gako xas ki nai ta ??"<<endl;
}
};
class love : public mother , public father{
    public:
void suggest(){
    mother :: suggest();
    father :: suggest();
    // we can put two function by using this syntax...
}
};
/*
Ambiguity is the process that the multiple base class have similar function name and the derived
class can't decide what function is to use.. 
This is called the ambiguity nature of this program.
This syntax should be write in derived class ;
{
    This is the syntax of ambiguity resolution 
     void similar_func_name(){
         Class_to_use :: function_name;
     }
}


*/
int main(){
  love L1;
  L1.suggest();
return 0;
}
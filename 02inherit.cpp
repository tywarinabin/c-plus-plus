#include<iostream>
using namespace std;
class minister{
double salary;   // This will not inherited ...>>>
public:
string name;
string post;
minister(){
    name = "Unknown";
    post = "Common Worker";
    salary = 20000;
}
void setsystemdata(){
    cout<<"Enter the name :"<<endl;
    cin>>name;
    cout<<"Enter your post : "<<endl;
    cin>>post;
    cout<<"Enter your salary(in k)"<<endl;
    cin>>salary;
}
void showthedataofasystem(){
    cout<<"Your name is  "<<name<<endl;
    cout<<"Your salary is  "<<salary<<endl;
    cout<<"The post of "<<name <<"  is as "<<post<<" of a country"<<endl;

}

};
class poltician : public minister{  
    // Poltician is Derived class whereas minister is base class

    public:
    poltician(){
   // Default Constructer of class -> Poltician
        cout<<"You are a poltician."<<endl<<" Enter your name"<<endl;
        cin>>name;
     string polticial_party;
     cout<<"Which polticial party does you belongs to ..?"<<endl;
     cin>>polticial_party;
    //  cout<<"Enter your salary :"<<endl;
    //  // salary is private member of base class...>>> 🤣😂😊😍😁
    //  cin>>salary;
    }
};
int main(){
  minister m1;
  m1.setsystemdata();
  m1.showthedataofasystem();
  poltician p1;
  p1.setsystemdata();
  p1.showthedataofasystem();
return 0;
}
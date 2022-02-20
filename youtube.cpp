#include<iostream>
using namespace std;
class Youtube{
string name;
string ytchannel;
public:
 static int suscribercouter,views;
Youtube(){
    suscribercouter++;
    name = "Unknown";
    ytchannel= "Youtuber";
    views++;
}
void getinfo(){
    views++;
    cout<<"Enter your name: "<<endl;
    cin>>name;
    cout<<"Enter your Youtube Channel: "<<endl;
    cin>>ytchannel;
    cout<<"Do you want to Suscribe our channel? --> Press 1 for Yes "<<endl;
    int x;
    cin>>x;
    if(x==1){
        suscribercouter++;
    }
  
}
void showdata(){
    cout<<"Your name is "<<name<<endl;
    cout<<"Your Youtube channel name is "<<ytchannel<<endl;
    cout<<"Current Suscribers --->"<<suscribercouter<<"  and Views are "<<views<<endl;
}
void unsuscribe(){
    cout<<"Do you Surely Want to Unsuscribe---> press 0 for Unsuscribe"<<endl;
    int y;
    cin>>y;
    if(y==0){
        suscribercouter--;
    }
}

};
int Youtube :: suscribercouter=100;
int  Youtube::  views=1000;
int main(){
  Youtube y1,y2;
y1.getinfo();
y1.unsuscribe();
y1.showdata();
y2.showdata();
return 0;
}
#include<bits/stdc++.h>
using namespace std;
int LinearSearch (int arr[], int n,int lock){
    for(int i = 0;i<n;i++){
        if(arr[i] == lock){
            return i+1;
        }

    }
    return -1;

}
int main(){
int size;
cin>>size;  
int array[size];
for(int i = 0;i<size;i++){
    cin>>array[i];
}
int keynumber;
cout<<" Enter the key element to search in array : "<<endl;
cin >> keynumber;
int founder = LinearSearch(array,size,keynumber);
cout<< " The Number that you are searching is on "<<founder <<" th Position of Array."<<endl;
return 0;
}
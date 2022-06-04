#include<bits/stdc++.h>
using namespace std;
int BinarySearch(int arr[],int n ,int key){
    int s = 0;
    // Starting index is S and ending index is E
    int e = n;
    while ( s<= e){
    int mid = (s+e)/2;
    if (arr[mid] == key){
        return mid ;
    }
    else if (arr [mid ] < key ){
        s = mid + 1;
        // This parts will run if the searched key is in Second part after Mid Index.
    }
    else {
        // This part will run if the searched key is in First part before the Mid Index.
        e = mid -1;
    }

    }
    return -1;
}
int main(){
int size;
cout<<"Enter the Size of an array: "<<endl;
// Size of an array ;
cin>>size;
int array[size];
cout<<"Enter Array Elements: "<<endl;
for (int i = 0 ; i < size ; i++){
    cin>>array[i];
}
int locker;
cin >> locker;
// passing array's size and key to the Function Binary Search
cout<<BinarySearch( array, size, locker);


    return 0;
}

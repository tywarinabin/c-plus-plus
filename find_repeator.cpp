#include <iostream>

using namespace std;

/*
   This program is used to find out the most no. of times repeatation 
     on a sorted list.
  
*/
int finder(int arr[], int n){
   static int temp,index,counter;
    for(int i = 0;i<n;i++){
        if(arr[index] == arr[i] ){
            counter++;
            value = arr[i];
        }
        else{
            if(counter>temp){
               
                temp = counter;
                counter = 1;
                 
            }
            else{
                counter = 1;
            }
            index =i;
           
            
        }
    }
   return temp;
}
int main()
{
    int n;
    cout<<"Enter the size of the Array: "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter array Elements:  "<<endl; // On Sorted Manner.
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
   int x =  finder(arr,n);
cout<<"Maximum no of repeatation is :  "<<x<< "  times .";
    return 0;
}
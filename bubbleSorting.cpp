#include<iostream>
using namespace std;

void Sorting(int arr[], int n){
for(int i=0; i<n; i++){
    for(int j=0; j<n-1; j++){
        if(arr[j]>arr[j+1]){
            // swap(arr[j],arr[j+1]);
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
            
        }
    }
}
for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
}
}
int main()
{
   int arr[5]={1,5,3,4,2};
   int n=5;
  Sorting(arr,n);

    return 0;
}
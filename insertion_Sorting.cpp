#include<iostream>
using namespace std;

int main(){
     int arr[]={4,2,5,6,7,8};
     int n=6;

     for(int i=1; i<n;i++){
        // cout<<arr[i];
        int curr= arr[i];
        int j=i-1;
        for(; j>=0; j--){
            if(arr[j]>curr){
                arr[j+1]=arr[j];
            }
        }
    cout<<arr[curr]<<" ";
        arr[j+1]=curr;
     }

    return 0;
}
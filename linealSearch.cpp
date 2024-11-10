#include<iostream>
using namespace std;

int main(){
    int arr[10];
    int k=0;
    int serch;
    cout<<"Enter the 10 number"<<endl;

    for(int i=0; i<10; i++){
        cin>>arr[i];

    }
    cout<<"Enter the value of find number"<<endl;
    cin>>serch;

    for(int i=0; i<10; i++){
        if(arr[i]==serch){
            k++;
        
        }
    }

    if(k>0){
        cout<<"elemet is found";

    }else{
        cout<<"Value is not found";
    }


    return 0;
}
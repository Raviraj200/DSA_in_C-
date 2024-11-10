#include<iostream>
using namespace std;
 int check(int){

 }
int main(){
    int arr[4][4];

    for(int i=0;i<3; i++){
        for(int j=0; j<3; j++){
            arr[i][j]=0;
        }
    }
    check(arr);

    // for(int i=0; i<3; i++){
    //     for(int j=0; j<3; j++){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    return 0;
}
#include<iostream>
using namespace std;


void fun(int arr[],int i){
    int a[4];
  a[i]=arr[i]%10;

  cout<<a[i]<<endl;

  fun(arr, i);
  
};
int main(){
    int arr[4]={102,402,653,564};
for(int i=0;i<=3; i++){
    fun(arr,i);
}

    return 0;
}
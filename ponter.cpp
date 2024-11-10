#include<iostream>
using namespace std;

// int  main(){
//    int  arr[]={10,20,3,40};

//    int *ptr= arr;

//    for(int i=0; i<=3; i++){
//     cout<<*ptr;
//     ptr++;
//    }

//     return 0;
// }
int swp(int* a,int* b){
    int tem= *a;
    *a=*b;
    *b=tem;
}
int main(){
   int a=10,b=20;
   swp(&a,&b);

   cout<<a<<" "<<b;


    return 0;
}
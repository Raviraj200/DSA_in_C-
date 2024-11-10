#include<iostream>
using namespace std;

int main(){
   int a,b;
   cin>>a>>b;
  
   while(b!=0){
      int rem =a-b;
      b=a;
     rem=b;
   }
   cout<<a;

    return 0;
}
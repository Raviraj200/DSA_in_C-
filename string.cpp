#include<iostream>
#include<string>
using namespace std;

int main(){
string std="nvjdvbdfhvbhdbvdhb";

int count =0,n;

for(int i=0; i<=std.length(); i++){
    for(int j=i; j<=std.length(); j++){
        if(std[i]==std[j]){
             n=count++;
        }
    }

}
cout<<"ans"<<std[n];


    return 0;
}
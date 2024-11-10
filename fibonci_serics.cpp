#include<iostream>
using namespace std;

int main(){
    int n,one=0,two=1;
    cin>>n;
    for(int i=0; i<=n; i++){
        int next=one+two;
        cout<<next;

        one=two;

        two=next;
    }

    return 0;
}
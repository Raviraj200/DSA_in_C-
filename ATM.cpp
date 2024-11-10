// #include<iostream>
// using namespace std;

// int cardNumber(int card){
//     cout<<card;
    
// };
// int passwordFun(int password){
//     cout<<password;
// }
// int Expdata(){
//  int cardNum;
//  cout<<"Enter your card number \n"; 
//  cin>>cardNum;

//  if(cardNum==cardNumber(cardNum)){
//     cout<<"Your card exp-data in";
//  }

// }; 
// int CVV(int cvvv){
   
//     if(cvv.length()==4){

//     }
    
// }
// int main(){
//     int n;
//      cout<<"Enter your chooel number\n 1.Card number \n 2.Password \n 3.Exp-Date \n 4.CVV number ";
//     cin>>n;

//     switch(n){
//         case 1:{
//             int card;
//             cout<<"Enter your card number"<<endl;
//             cin>>card;
//             cardNumber(card);
//             break;
//         }

//         case 2:{
//             int password;
//             cout<<"enter your password";
//             cin>>password;
//             passwordFun(password);
//             break;
//         }   
//         case 3:{
//             Expdata();
//             break;
//         }
//         case 4:{
//  int cvvv;
//     cout<<"This is your cvv number ";
//     cin>>cvvv;
//             CVV(cvvv);
//             break;
//         }
//         default :{
//             cout<<"Invalide";
//         }
//     }

// }

#include<iostream>
using namespace std;

int main(){
  int n=1;
  for(int i=0; i<3; i++){
    n=n*2;
  };
  cout<<n;
    return 0;
}
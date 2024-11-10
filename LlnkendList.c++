#include<iostream>
using namespace std;

struct node{
    int data;
    struct node* next;
    struct node* pre;

};
struct node* start=0;

struct node* creatNode(){
    struct node*h1;
    h1=(struct node*)malloc(sizeof(struct node));
    cout<<"Enter a Data->";
    cin>>h1->data;
    h1->next=0;
    h1->pre=0;
    return h1;
}
void is(){
    struct node *j;
    j=creatNode();

    if(start==0){
        start=j;

    }else{
        j->next=start;
        start->pre=j;
        start=j;
    }
}
void ds(){
    struct node*d1;
    d1=start;
    start=start->next;
    start->pre=0;
    d1->next=0;
    free(d1);
}
// void im(){
//     struct node* mid;
//     mid=creatNode();
//     if(start==0){
//         start=mid;
//     }else{int n;
//     struct node* m;
    
//         cout<<"enter a set element";
//         cin>>n;
//         while(start->next!=n){
//          start=start->next;


//         }
//  m=start->next->next;
//  start->next=mid;
//  mid->next=m;
//  start=mid;

//     }
// }
void displat(){
    struct node * h1;
    h1=start;
    if(start==0){
        cout<<"Sorry";
    }else{
        while(h1->next!=0){
            cout<<h1->data<<"->";
            h1=h1->next;
        }
        cout<<h1->data;
        // while(h1->pre!=0){
        //     cout<<h1->data<<"->";
        //     h1=h1->pre;
        //   if(h1->pre==0){
        //     cout<<h1->data;
        //   }
        // }
    }
}
int main(){
    int n;
   cout<<"enter a length";
   cin>>n;
   for(int i=0; i<n; i++){
    is();
   };
   displat();
   ds();
   cout<<endl;
   displat();

    return 0;
}
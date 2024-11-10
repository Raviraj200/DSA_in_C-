#include<iostream>
using namespace std;

struct stack{
  int top;
  int cap;
  int *arr;
};
int isFull(struct stack*st){
    if(st->top == st->cap-1){
        return 1;
    }else{
        return 0;
    }
}

int isEmpty(struct stack *st){
    if(st->top==-1){
        return 1;

    }else{
        return 0;
    }
}
void push(struct stack * st){
    if(!isFull(st)){
        st->top++;
        cout<<"Enetr a data";
        cin>>st->arr[st->top];

    }else{
        cout<<"Stack is overflow";
    }

}
void pop(struct stack * st){
     if(!isEmpty(st)){
        int data=st->arr[st->top];
        st->top--;
     }else{
        cout<<"stack is empty";
     }
}
void display(struct stack *st){
  for(int i=0; i<=st->top ; i++){
    cout<<st->arr[i]<<"->";
  }
}
int main(){
    int size,ch;
    cout<<"Enter a size";
    cin>>size;
    struct stack * st;
    st=(struct stack *)malloc(sizeof(struct stack));
    st->cap=size;
    st->top=-1;
    st->arr=(int *)calloc(st->cap,sizeof(int));
cout<<"1 Push"<<endl;
cout<<"2 Pop"<<endl;
cout<<"3 display"<<endl;
cout<<"4 Exit"<<endl;

while(1){
    cout<<"Enter your choice";
    cin>>ch;
    switch(ch){
        case 1:{
            push(st);
            break;
        }
        case 2:{
            pop(st);
            break;
        }
        case 3:{
            display(st);
            break;
        }
        case 4:{
           exit(0);
        }
        default:{
            cout<<"sorry";
        }
    }
}



return 0;
}
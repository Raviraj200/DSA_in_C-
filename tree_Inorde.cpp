#include<iostream>
using namespace std;
struct node{
    int data;
    node*left;
    node*right;

    node(int n){
         data=n;
        left=NULL;
        right=NULL;
    }
};
void InOrder(node*root){
    if(root==NULL){
        return;
    }
    InOrder(root->left);
    cout<<root->data<<
    
    "->";
    InOrder(root->right);
}

int main(){
    node*root= new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->right=new node(5);
    root->left->left=new node(4);
    root->right->left=new node(6);
    root->right->right=new node(7);
 InOrder(root);

    return 0;
}
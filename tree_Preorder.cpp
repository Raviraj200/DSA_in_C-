#include <iostream>
using namespace std;

struct node
{
    node *left;
    int data;
    node *right;
    node(int n)
    {
        data = n;
        right = NULL;
        left = NULL;
    }
};
void preOrder(node*root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}
int main()
{
    node*root= new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->right=new node(5);
    root->left->left=new node(4);
    root->right->left=new node(6);
    root->right->right=new node(7);

    preOrder(root);


    return 0;
}
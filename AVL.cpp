#include <iostream>
using namespace std;
struct node
{
    int key;
    node *left;
    node *right;
    int hight;
};
int getHeigt(node *n)
{
    if (n == NULL)
    {
        return 0;
    }
    else
    {
        return n->hight;
    }
};

node *createNode(int key)
{
    node *node1 = new node;
    node1->key = key;
    node1->left = NULL;
    node1->right = NULL;
    node1->hight = 1;

    return node1;
}

int getBalanceFacter(node *n)
{
    if (n == NULL)
    {
        return 0;
    }
    else
    {
        return getHeigt(n->left) - getHeigt(n->right);
    }
}

node *rightRotate(node *y)
{
    node *x = y->left;
    node *t2 = x->right;

    x->right = y;
    y->left = t2;

    y->hight = max(getHeigt(y->right), getHeigt(y->left)) + 1;
    x->hight = max(getHeigt(x->right), getHeigt(x->left)) + 1;

    return x;
};

node *leftRotate(node *x)
{
    node *y = x->right;
    node *t2 = y->left;

    y->left=x;
     x->right=t2;
    y->hight = max(getHeigt(y->right), getHeigt(y->left)) + 1;
    x->hight = max(getHeigt(x->right), getHeigt(x->left)) + 1;
    return y;
}
node *insert(node *node, int key)
{
    if (node == NULL)
    {
        return (createNode(key));
    }
    if (key < node->key)
    {
        node->left = insert(node->left, key);
    }
    else if (key > node->key)
    {
        node->right = insert(node->right, key);
        return node;
    }
    node->hight = 1 + max(getHeigt(node->left), getHeigt(node->right));
    int bf = getBalanceFacter(node);

    // ll
    if(bf>1 && key<node->left->key){
        return rightRotate(node);
    }

    // RR
    if(bf<-1 && key>node->right->key){
        return leftRotate(node);
    }

    // LR 

    if(bf>1  && key>node->left->key){
        node->left=leftRotate(node->left);
        return rightRotate(node);
    }

    // RL 
    if(bf<-1 && key<node->right->key){
        node->right=rightRotate(node->right);
        return leftRotate(node);
    }
}
int max(int a,int b){
    return a>b?a:b;
}
void preOrder(node*root){
    if(root!=NULL){
        cout<<root->key<<endl;
        preOrder(root->left);
        preOrder(root->right);
    }
}
int main()
{
struct node*root=NULL;
root=insert(root,1);
root=insert(root,2);
root=insert(root,4);
root=insert(root,5);
root=insert(root,6);
root=insert(root,3);

preOrder(root);
    return 0;
}
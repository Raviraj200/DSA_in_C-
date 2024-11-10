
#include <iostream>
using namespace std;
struct node
{
    int data;
    node *right;
    node *left;
    node(int val)
    {
        data = val;
        right = NULL;
        left = NULL;
    }
};
node *BST(node *root, int val)
{
    if (root == NULL)
    {
        return new node(val);
    }
    if (val > root->data)
    {
        root->right = BST(root->right, val);
    }
    else
    {
        root->left = BST(root->left, val);
    }
}
void inorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
};
int main()
{
    node *root = NULL;
    int a, n;
    cout << "Enter a size of arrya" << endl;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        cout << i + 1 << "->";
        cin >> n;
        root = BST(root, n);
    }
    inorder(root);
    return 0;
}
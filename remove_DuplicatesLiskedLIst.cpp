#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};
node*start=0;
node *createNode()
{
    cout << "Enter a data" << endl;
    node *newNode = new node;
    cin >> newNode->data;
    newNode->next = 0;
    return newNode;
}
void display(){
    
    struct node*newNode;
  


    while(newNode!=NULL){
        cout<<newNode->data;
        newNode=newNode->next;
    }
}
int main()
{
    int n;
    cout << "Length of list\n";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        node *n1 = createNode();
    }
 display();

    return 0;
}





#include <iostream>
using namespace std;

struct Queue
{
    int rear;
    int front;
    int cap;
    int *arr;
};
int isFull(struct Queue *q)
{
    if ((q->rear + 1) % q->cap == q->front)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isEmpty(struct Queue *q)
{
    if (q->front == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void enQueue(struct Queue *q)
{
    int num;
    cout << "Enter a data" << endl;
    cin >> num;
    if (!isFull(q))
    {
        q->rear = q->rear + 1 % q->cap;
        q->arr[q->rear] = num;
        if (q->front == -1)
        {
            q->front = q->rear;
        }
    }
    else
    {
        cout << "Queue is Full" << endl;
    }
};
int main()
{
    int cap;
    cout << "enter a size" << endl;
    cin >> cap;

    struct Queue *q;
    q = (struct Queue *)malloc(sizeof(struct Queue));
    q->cap = cap;
    q->front = -1;
    q->rear = -1;
    q->arr = (int *)calloc(q->cap, sizeof(int));

    enQueue(q);
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

// Easy Implementation

struct Queue
{
    int size, cap;
    int *arr;
    int f;
    Queue(int c)
    {
        cap = c;
        size = 0;
        arr = new int[cap];
        int f = 0;
    }
    void enqueue(int x)
    {
        if (isFull())
            return;
        int r = getBack();
        r = (r + 1) % cap;
        arr[r++]=x;
        size++;
    }
    void dequeue()
    {
        if (isEmpty())
            return;
        f = (f + 1) % cap;
        size--;
    }
    int getFront()
    {
        if (isEmpty())
            return -1;
        return f;
    }
    int getBack()
    {
        if (isEmpty())
            return -1;
        return (f + size - 1) % cap;
    }
    bool isFull()
    {
        if (size == cap)
            return true;
        return false;
    }
    bool isEmpty()
    {
        if (size == 0)
            return true;
        return false;
    }
};

void Print(int arr[],int f,int b)
{
    for (int i = f; i <= b; i++)
        cout << arr[i] << " ";
}

int main()
{
    Queue *q = new Queue(10);
    q->enqueue(1);
    q->enqueue(2);
    q->enqueue(3);
    int b = q->getBack();
    Print(q->arr, q->f,b);
    cout<<"\n";
    q->dequeue();
    Print(q->arr, q->f,b);
    cout<<"\n";
    cout<<q->size<<"\n";   
}
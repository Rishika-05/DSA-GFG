#include <bits/stdc++.h>
using namespace std;

// Easy Implementation

struct Queue
{
    int size, cap;
    int *arr;
    int f;
    int b;
    Queue(int c)
    {
        cap = c;
        size = 0;
        arr = new int[cap];
        int f = 0;
        int b = -1;
    }
    void enqueue(int x)
    {
        if (isFull())
            return;
        arr[size] = x;
        size++;
    }
    void dequeue()
    {
        if (isEmpty())
            for (int i = 0; i < size - 1; i++)
                arr[i] = arr[i + 1];
        size--;
    }
    int getFront()
    {
        if (isEmpty())
            return -1;
        return 0;
    }
    int getBack()
    {
        if (isEmpty())
            return -1;
        return size - 1;
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

void Print(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
}

int main()
{
    Queue *q = new Queue(10);
    q->enqueue(1);
    q->enqueue(2);
    q->enqueue(3);
    Print(q->arr, q->size);
}
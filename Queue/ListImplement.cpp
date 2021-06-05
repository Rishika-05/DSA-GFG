#include <bits/stdc++.h>
using namespace std;

// head - front    last - rear.

struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

struct Queue
{
    Node *front, *rear;
    Queue()
    {
        front = NULL;
        rear = NULL;
    }
    void enqueue(int x)
    {
        Node *temp = new Node(x);
        if (front == NULL)
        {
            front = rear = temp;
            return;
        }
        Node *ptr = front;
        while (ptr->next != NULL)
            ptr = ptr->next;
        ptr->next = temp;
        rear->next = temp;
        rear = temp;
    }
    void dequeue()
    {
        if (front == NULL)
            return;
        Node *temp = front;
        front = front->next;
        if (front == NULL)
            rear = NULL;
        delete temp;
    }
    void Print()
    {
        Node *f = front;
        while (f != NULL)
        {
            cout << f->data << " ";
            f = f->next;
        }

        cout << "\n";
    }
};

int main()
{
    Queue *q = new Queue();
    q->enqueue(10);
    q->enqueue(20);
    q->enqueue(30);
    q->Print();
    q->dequeue();
    q->Print();
}
#include <bits/stdc++.h>
using namespace std;

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

void PrintCLL(Node *head)
{
    if (head->next == head)
    {
        cout << head->data;
    }
    else
    {
        Node *p;
        //cout << head->data << " ";
        //for (p = head->next; p != head; p = p->next)
          //  cout << p->data << " ";
        Node *x = head;
        do
        {
            cout << x->data << " ";
            x = x->next;
        } while (x != head);
    }
    cout << "\n";
}

int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = head;
    PrintCLL(head);
    return 0;
}
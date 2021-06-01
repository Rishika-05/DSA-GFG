#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node *prev;
    Node(int x)
    {
        data = x;
        next = NULL;
        prev = NULL;
    }
};

void PrintCDLL(Node *head)
{
    if (head == NULL)
        cout << head;
    Node *ptr = head;
    do
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    } while (ptr != head);
    cout << "\n";
}

Node *insertBegin(Node *head, int x)
{
    Node *ptr = new Node(x);
    ptr->next = head;
    ptr->prev = head->prev;
    head->prev->next = ptr;
    head->prev = ptr;
    return ptr;
}


int main()
{
    Node *head = new Node(10);
    Node *n1 = new Node(20);
    Node *n2 = new Node(30);
    head->next = n1;
    n1->next = n2;
    n1->prev = head;
    n2->prev = n1;
    n2->next = head;
    head->prev = n2;
    PrintCDLL(head);
    head = insertBegin(head, 5);
    PrintCDLL(head);
    return 0;
}
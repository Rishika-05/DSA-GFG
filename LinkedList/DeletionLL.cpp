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

void PrintLL(Node *ptr)
{
    while (ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
    cout << "\n";
}

Node *deleteAtBegin(Node *head)
{
    if (head == NULL)
        return NULL;
    else
    {
        Node *ptr = head->next;
        delete head;
        return ptr;
    }
}

Node *deleteAtEnd(Node *head)
{
    if (head == NULL)
        return NULL;
    if (head->next == NULL)
    {
        delete head;
        return NULL;
    }
    Node *ptr = head;
    while (ptr->next->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = NULL;
    delete ptr->next;
    return head;
}

int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    PrintLL(head);
    head = deleteAtBegin(head);
    PrintLL(head);
    head = deleteAtEnd(head);
    PrintLL(head);
}
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

Node *insertAtBegin(Node *head, int x)
{
    Node *ptr = new Node(x);
    ptr->next = head;
    return ptr;
}

Node *insertAtEnd(Node *head, int x)
{
    if (head == NULL)
    {
        Node *ptr = new Node(x);
        return ptr;
    }
    Node *ptr = head;
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    Node *ptr1 = new Node(x);
    ptr->next = ptr1;
    return head;
}

Node *insertInBtw(Node *head, int x, int pos)
{
    Node *ptr = new Node(x);
    Node *ptr1 = head;
    if (pos == 1)
    {
        ptr->next = head;
        return ptr;
    }
    if (head == NULL)
        return ptr;
    for (int i = 0; i <= pos - 2 && ptr1 != NULL; i++)
    {
        ptr1 = ptr1->next;
    }
    ptr->next = ptr1->next;
    ptr1->next = ptr;
    return head;
}

int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    PrintLL(head);
    head = insertAtBegin(head, 5);
    PrintLL(head);
    head = insertAtEnd(head, 40);
    PrintLL(head);
    head = insertInBtw(head, 50, 5);
    PrintLL(head);
}
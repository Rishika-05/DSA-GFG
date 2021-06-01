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

void PrintDLL(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << "\n";
}

Node *insertBegin(Node *head, int x)
{
    Node *ptr = new Node(x);
    ptr->next = head;
    if (head != NULL)
        head->prev = ptr;
    return ptr;
}

Node *insertEnd(Node *head, int x)
{
    Node *ptr = new Node(x);
    if (head == NULL)
        return ptr;
    Node *temp = head;
    while (temp->next != NULL)
        temp = temp->next;
    temp->next = ptr;
    ptr->prev = temp;
    return head;
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
    PrintDLL(head);
    head = insertBegin(head, 5);
    PrintDLL(head);
    head = insertEnd(head, 35);
    PrintDLL(head);
    return 0;
}
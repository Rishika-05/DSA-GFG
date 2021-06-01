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

Node *deleteHead(Node *head)
{
    if (head == NULL)
        return NULL;
    if (head->next == NULL)
    {
        delete head;
        return NULL;
    }
    Node *ptr = head->next;
    ptr->prev = NULL;
    delete head;
    return ptr;
}

Node *deleteEnd(Node *head)
{
    if (head == NULL)
        return NULL;
    if (head->next == NULL)
    {
        delete head;
        return NULL;
    }
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->prev->next = NULL;
    delete temp;
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
    head = deleteEnd(head);
    PrintDLL(head);
    return 0;
}
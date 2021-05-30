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

Node *insert(Node *head, int x)
{
    Node *ptr = new Node(x);
    if (head == NULL)
    {
        return ptr;
    }
    if (head->data > x)
    {
        ptr->next = head;
        return ptr;
    }
    //Node* last;
    Node *temp = head;
    while (temp->next != NULL && temp->next->data < x)
    {
        temp = temp->next;
    }
    ptr->next = temp->next;
    temp->next = ptr;
    
    return head;
}

int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head = insert(head, 45);
    PrintLL(head);
    return 0;
}
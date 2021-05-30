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

void nthLast(Node *head, int k)
{
    if (head == NULL)
        return;
    Node *first = head;
    Node *second = head;
    for (int i = 0; i < k; i++)
    {
        first = first->next;
        if (first == NULL)
            return ;
    }
    while (first != NULL)
    {
        second = second->next;
        first = first->next;
    }
    cout << second->data;
}

int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = new Node(50);
    nthLast(head, 3);
    // cout<<nthLast(head);
    return 0;
}
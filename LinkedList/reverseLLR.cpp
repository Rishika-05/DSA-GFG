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

Node *reverseLLR(Node *head)
{
    if(head == NULL)
    return NULL;
    if(head->next == NULL)
    {
        return head;
    }
    Node *rest_head = reverseLLR(head->next);
    Node *rest_tail = head->next;
    rest_tail->next = head;
    head->next = NULL;
    return rest_head;
}

int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = new Node(50);
    PrintLL(head);
    head = reverseLLR(head);
    PrintLL(head);
    // cout<<nthLast(head);
    return 0;
}
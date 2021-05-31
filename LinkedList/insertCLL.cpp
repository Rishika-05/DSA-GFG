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

Node *insertBegin(Node *head, int x)
{
    Node *ptr = new Node(head->data);
    if (head == NULL)
    {
        ptr->next = ptr;
        return ptr;
    }
    // ptr->next = head;             //O(n) solution.
    // Node *p = head;
    // while (p->next != head)
    // {
    //     p = p->next;
    // }
    // p->next = ptr;
    // return ptr;
    ptr->next = head->next; // O(1) solution.
    head->next = ptr;
    head->data = x;
    return head;
}

Node *insertEnd(Node *head, int x)
{
    Node *ptr = new Node(head->data);
    if (head == NULL)
    {
        ptr->next = ptr;
        return ptr;
    }
    // ptr->next = head;             //O(n) solution.
    // Node *p = head;
    // while (p->next != head)
    // {
    //     p = p->next;
    // }
    // p->next = ptr;
    // return head;
    ptr->next = head->next; // O(1) solution.
    head->next = ptr;
    head->data = x;
    return ptr;
}



int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = head;
    PrintCLL(head);
    head = insertBegin(head, 15);
    PrintCLL(head);
    head = insertEnd(head, 35);
    PrintCLL(head);
    return 0;
}
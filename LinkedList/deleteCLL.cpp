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
        //Node *p;
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

Node *deleteHead(Node *head)
{
    if (head == NULL)
        return NULL;
    if (head->next == head)
    {
        delete head;
        return NULL;
    }
    head->data = head->next->data;
    Node *temp = head->next;
    head->next = head->next->next;
    delete temp;
    return head;
    // Node *p = head;
    // while(p->next!=head)
    // {
    //     p = p->next;
    // }
    // p->next = head->next;
    // delete head;
    // return p->next;
}

Node *deleteKth(Node *head, int k)
{
    if (head == NULL)
        return NULL;
    if (head->next == head)
    {
        delete head;
        return NULL;
    }
    if(k==1)
    {
        return deleteHead(head);
    }
    else
    {
        Node *ptr = head;
        for (int i = 0; i < k - 2; i++)
            ptr = ptr->next;
        Node *temp = ptr->next;
        ptr->next = ptr->next->next;
        delete temp;
        return head;
    }
}

int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = head;
    PrintCLL(head);
    head = deleteKth(head, 2);
    PrintCLL(head);
    return 0;
}
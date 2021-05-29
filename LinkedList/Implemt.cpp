#include <bits/stdc++.h>
using namespace std;


// Construct, print and Search in a singly Linked List.


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

void PrintLL(Node *ptr) // Printing Linked List using while loop.
{
    while (ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
}

void PrintLLR(Node *ptr) // Printing Linked List using recursion.
{
    if (ptr == NULL)
        return;
    cout << ptr->data << " ";
    return PrintLL(ptr->next);
}

int Search(Node *ptr, int x)  // search element using while loop.
{
    int idx = 1;
    while (ptr != NULL)
    {
        if (ptr->data == x)
            return idx;
        idx++;
        ptr = ptr->next;
    }
    return -1;
}

int SearchR(Node *ptr, int x)    // search element using recursion.
{
    if (ptr == NULL)
        return -1;
    if (ptr->data == x)
        return 1;
    else
    {
        int res = Search(ptr->next, x);
        if (res == -1)
            return -1;
        return res + 1;
    }
}

int main()
{
    // detailed implementation.
    Node *head2 = new Node(10);
    Node *temp1 = new Node(20);
    Node *temp2 = new Node(30);
    head2->next = temp1;
    temp1->next = temp2;

    // short implementation
    Node *head = new Node(5);
    head->next = new Node(10);
    head->next->next = new Node(25);
    head->next->next->next = new Node(20);

    PrintLL(head);
    cout << "\n";
    PrintLLR(head);
    cout << "\n";
    cout << "\n";

    cout << Search(head, 25) << "\n";
    cout << Search(head, 35) << "\n\n";

    cout << SearchR(head, 25) << "\n";
    cout << SearchR(head, 35) << "\n";

    return 0;
}
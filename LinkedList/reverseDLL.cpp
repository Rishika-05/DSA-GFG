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

Node *reverse(Node *head)
{
    if (head == NULL || head->next == NULL)
        return head;
    Node *prev = NULL;
    Node *curr = head;
    while (curr != NULL)
    {
        prev = curr->prev;
        curr->prev = curr->next;
        curr->next = prev;
        curr = curr->prev;
    }
    return prev->prev;
}

int main()
{
    Node *head = new Node(10);
    head = insertEnd(head, 20);
    head = insertEnd(head, 30);
    head = insertEnd(head, 40);
    head = insertEnd(head, 50);
    PrintDLL(head);
    head = reverse(head);
    PrintDLL(head);

}
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

int intersectPoint(Node *head1, Node *head2)
{
    map<Node *, int> m;
    while (head1 != NULL)
    {
        m[head1]++;
        head1 = head1->next;
    }
    while (head2 != NULL)
    {
        m[head2]++;
        if (m[head2] > 1)
            return head2->data;
        head2 = head2->next;
    }
    return -1;
}

int main()
{
    Node *head1 = new Node(10);
    Node *p1 = new Node(20);
    Node *p2 = new Node(30);
    Node *p3 = new Node(40);
    Node *p4 = new Node(50);
    Node *head2 = new Node(5);
    head2->next = p2;
    head1->next = p1;
    p1->next = p2;
    p2->next = p3;
    p3->next = p4;
    cout << intersectPoint(head1, head2);
}
#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

bool detectCycle(Node *head)
{
    map<Node *,int> m;
    Node *curr =head ;
    while(curr!=NULL)
    {
        if(m[curr]>0)
        return true;
        m[curr]++;
        curr = curr->next;
    }
    return false;

}

bool detectCycle2(Node *head)         // Floyd’s Cycle-Finding Algorithm
{
    Node *slow =head ;
    Node *fast =head ;
    while(slow!=NULL && fast!=NULL && fast->next!=NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if(slow==fast)
        return true;
    }
    return false;

}


int main()
{
    Node* head= new Node(10);
    Node* p1= new Node(10);
    Node* p2= new Node(10);
    Node* p3= new Node(10);
    Node* p4= new Node(10);
    head->next = p1;
    p1->next=p2;
    p2->next=p3;
    p3->next=p4;
    p4->next=p1;
    if(detectCycle2(head))
    cout<<"Loop found\n";
    else
    cout<<"No loop detected.\n";
}
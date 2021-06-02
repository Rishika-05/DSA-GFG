#include <bits/stdc++.h>
using namespace std;

struct Stack
{
    int data;
    Stack *next;
    Stack(int x)
    {
        data = x;
        next = NULL;
    }
};

void PrintStack(Stack *s)
{
    while (s->next != NULL)
    {
        cout << s->data << " ";
        s = s->next;
    }
    cout << "\n";
}

Stack *push(Stack *s, int x)
{
    Stack *ptr = new Stack(x);
    ptr->next = s;
    s = ptr;
    return s;
}

int pop(Stack *s)
{
    if (s == NULL)
        return -1;
    int res = s->data;
    Stack *temp = s;
    s = temp->next;
    delete temp;
    return res;
}

int main()
{
    Stack *s = new Stack(10);
    Stack *s1 = new Stack(20);
    Stack *s2 = new Stack(30);
    Stack *s3 = new Stack(40);
    s3->next = s2;
    s2->next = s1;
    s1->next = s;
    PrintStack(s3);
    s3 = push(s3, 50);
    PrintStack(s3);
    cout << pop(s3);
}
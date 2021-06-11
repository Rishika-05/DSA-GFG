#include<bits/stdc++.h>
using namespace std;

struct  Person
{
    int age;
    float ht;
    Person(int a,float h)
    {
        age = a;
        ht = h;
    }
    /* data */
};

struct myComp{
    bool operator()(Person const &p1,Person const &p2)
    {
        return p1.ht < p2.ht;
    }
};

int main()
{
    priority_queue<Person , vector<int>, myComp> pq;
    Person p(13,5.5);
    pq.push(p.ht);
}
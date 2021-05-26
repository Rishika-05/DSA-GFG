#include <bits/stdc++.h>
using namespace std;

struct Point
{
    int x, y;
};
bool myCmp(Point a, Point b)
{
    return a.y > b.y;
}

int main()
{
    Point arr[] = {{3, 10}, {2, 8}, {5, 4}};
    sort(arr, arr + 3, myCmp);
    for (auto i : arr)
        cout << i.x << " " << i.y << "\n";
    return 0;
}
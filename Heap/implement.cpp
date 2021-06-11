#include <bits/stdc++.h>
using namespace std;

class MinHeap
{
    int *arr;
    int size;
    int cap;

public:
    MinHeap(int c)
    {
        size = 0;
        cap = c;
        arr = new int[c];
    }
    int left(int i)
    {
        return 2 * i + 1;
    }
    int right(int i)
    {
        return 2 * i + 2;
    }
    int parent(int i)
    {
        return floor((i - 1) / 2);
    }
    void insertKey(int x) // time - O(h).
    {
        if (size == cap)
            return;
        size++;
        arr[size - 1] = x;
        for (int i = size - 1; i != 0 && arr[parent(i)] > arr[i];)
        {
            swap(arr[i], arr[parent(i)]);
            i = parent(i);
        }
    }
    void printHeap()
    {
        for (int i = 0; i < size; i++)
            cout << arr[i] << " ";
        cout << "\n";
    }
    void minHeapify(int i) // time - O(log n) Avg.
    {
        int l = left(i);
        int r = right(i);
        int small = i;
        if (l < size && arr[l] < arr[i])
            small = l;
        if (r < size && arr[r] < arr[small])
            small = r;
        if (small != i)
        {
            swap(arr[i], arr[small]);
            minHeapify(small);
        }
    }
    int getMin()
    {
        return arr[0];
    }
    int extractMin() // time - O(log n)
    {
        if (size == 0)
            return INT_MAX;
        if (size == 1)
            return arr[0];
        swap(arr[0], arr[size - 1]);
        size--;
        minHeapify(0);
        return arr[size];
    }
    void decreaseKey(int i, int x)
    {
        arr[i] = x;
        while (i != 0 && arr[i] < arr[parent(i)])
        {
            swap(arr[i], arr[parent(i)]);
            i = parent(i);
        }
    }
    void deleteKey(int i) // time - O(h)
    {
        decreaseKey(i, INT_MIN);
        extractMin();
    }
    void buildHeap() // time - O(n).
    {
        for (int i = size - 2 / 2; i >= 0; i--)
            minHeapify(i);
    }
};

int main()
{
    MinHeap h(10);
    h.insertKey(10);
    h.insertKey(20);
    h.insertKey(15);
    h.insertKey(40);
    h.insertKey(50);
    h.insertKey(100);
    h.insertKey(25);
    h.printHeap();
    h.insertKey(12);
    h.printHeap();
    h.extractMin();
    h.printHeap();
    h.decreaseKey(3, 14);
    h.printHeap();
    return 0;
}
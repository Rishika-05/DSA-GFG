#include <bits/stdc++.h>
using namespace std;

void showlist(list<int> g)
{
    list<int>::iterator it;
    for (it = g.begin(); it != g.end(); ++it)
        cout << '\t' << *it;
    cout << '\n';
}

int main()
{

    list<int> gqlist1, gqlist2;

    for (int i = 0; i < 10; ++i)
    {
        gqlist1.push_back(i * 2);
        gqlist2.push_front(i * 3);
    }
    cout << "\nList 1 (gqlist1) is : ";
    showlist(gqlist1);

    cout << "\nList 2 (gqlist2) is : ";
    showlist(gqlist2);

    cout << "\ngqlist1.front() : " << gqlist1.front();
    cout << "\ngqlist1.back() : " << gqlist1.back();

    cout << "\ngqlist1.pop_front() : ";
    gqlist1.pop_front();
    showlist(gqlist1);

    cout << "\ngqlist2.pop_back() : ";
    gqlist2.pop_back();
    showlist(gqlist2);

    cout << "\ngqlist1.reverse() : ";
    gqlist1.reverse();
    showlist(gqlist1);

    cout << "\ngqlist2.sort(): ";
    gqlist2.sort();
    showlist(gqlist2);

    return 0;
}

// assign() – Assigns new elements to list by replacing current elements and resizes the list.
// remove() – Removes all the elements from the list, which are equal to given element.
// list::remove_if() in C++ STL– Used to remove all the values from the list that correspond true to the predicate or condition given as parameter to the function.
// reverse() – Reverses the list.
// size() – Returns the number of elements in the list.
// list resize()function in C++ STL– Used to resize a list container.
// sort() – Sorts the list in increasing order.
// list max_size() function in C++ STL– Returns the maximum number of elements a list container can hold.
// list unique() in C++ STL– Removes all duplicate consecutive elements from the list.
// list::emplace_front() and list::emplace_back() in C++ STL– emplace_front() function is used to insert a new element into the list container, the new element is added to the beginning of the list. emplace_back() function is used to insert a new element into the list container, the new element is added to the end of the list.
// list::clear() in C++ STL– clear() function is used to remove all the elements of the list container, thus making it size 0.
// list::operator= in C++ STL– This operator is used to assign new contents to the container by replacing the existing contents.
// list::swap() in C++ STL– This function is used to swap the contents of one list with another list of same type and size.
// list splice() function in C++ STL– Used to transfer elements from one list to another.
// list merge() function in C++ STL– Merges two sorted lists into one
// list emplace() function in C++ STL– Extends list by inserting new element at a given position.
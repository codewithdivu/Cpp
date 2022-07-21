#include <iostream>
#include <list>  // it is implemented by doubly linked list

using namespace std;
int main()
{
    list<int> l;

    list<int> n(5, 100);
    cout << "Printing n" << endl;
    for (int i : n)
    {
        cout << i << " ";
    }
    cout << endl;
    l.push_back(1);
    l.push_front(2);

    l.pop_back();
    l.pop_front();

    for (int i : l)
    {
        cout << i << " ";
    }
    cout << endl;
    l.erase(l.begin());
    cout << "after erase" << endl;
    for (int i : l)
    {
        cout << i << " ";
    }

    cout << "size of list" << l.size() << endl;

    return 0;
}

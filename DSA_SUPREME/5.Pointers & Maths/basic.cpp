#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int a = 5;

    // pointer creation
    int *ptr = &a;

    // access the value of ptr is pointing to
    cout << *ptr << endl; // 5

    //

    cout << "Address of a is " << &a << endl; // address
    cout << "value stored at ptr is " << ptr << endl; // address
    cout << "value ptr is pointing to is " << *ptr << endl; // value
    return 0;
}
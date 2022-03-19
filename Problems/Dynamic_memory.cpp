#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{

    int *p = new int; // request memory
    *p = 9;           // store value

    //we have dynamically allocated memory for an integer and assigned it a value of 5

    cout << *p << endl; // use value

    // delete p; // free up the memory

    // now p is dangling pointer
    // Dangling pointer => ponters that are left pointing to non-existent memory locations are called dangling pointer

    // DYNAMIC MEMORY ALSO CAN BE ALLOCATED FOR ARRAYS

    int *q = NULL; // pointer intialized with null
    q = new int[20]; // request memory
    delete [] p;  // delete array pointed to by p

    
    return 0;
}
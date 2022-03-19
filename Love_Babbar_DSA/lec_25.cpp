#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int a = 10;
    int *p = &a;
    int **q = &p;

    // PRINTING THE VALUE OF A IN ALL DIFFERENT WAYS

    cout << "value of a " << a << endl;
    cout << "value of a using pointer p " << *p << endl;
    cout << "value of a using pointer q " << **q << endl;
    cout << endl;

    // PRINTING THE ADDRESS OF A IN ALL DIFFERENT WAYS

    cout << "address of a " << &a << endl;
    cout << "address of a using p " << p << endl;
    cout << "address of a using q" << *q << endl;

    // PRINTING THE ADDRESS OF POINTER P IN ALL DIFFERENT WAYS

    cout << "address of p " << &p << endl;
    cout << "address of p using q " << q << endl;
    cout << endl;

    // PRINTING THE ADDRESS OF POINTER Q IN ALL DIFFERENT WAYS

    cout << "address of q " << &q << endl;
    cout << endl;

    return 0;
}
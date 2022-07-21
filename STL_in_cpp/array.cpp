#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    array<int, 5> arr = {1, 4, 5, 7, 9};

    int size = arr.size();

    // cout << "max size of an array " << arr.max_size() << endl;

    // for (int i = 0; i < size; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    // for (int i = 0; i < size; i++)
    // {
    //     cout << arr.at(i) << " ";
    // }

    // for (int i = 0; i < size; i++)
    // {
    //     cout << get<2>(arr) << " ";
    // }

    // cout << "first element of array is " << arr.front() << endl;
    // cout << "last element of array is " << arr.back() << endl;

    // arr.empty();

    // array<int, 6> fuu;
    // fuu.fill(9);

    // for (int i = 0; i < fuu.size(); i++)
    // {
    //     cout << fuu[i] << " ";
    // }

    // array<int, 6> ar = {1, 2, 3, 4, 5, 6};
    // array<int, 6> ar1 = {7, 8, 9, 10, 11, 12};

    // Swapping ar1 values with ar

    // ar.swap(ar1);

    return 0;
}

#include <iostream>
#include <array>

using namespace std;
int main()
{

    int basic[3] = {1, 2, 3};

    array<int, 4> a = {1, 2, 3, 4};

    int size = a.size();

    for (int i = 0; i < size; i++)
    {
        cout << a[i] << endl;
    }

    cout << "Element at 2nd Index-> " << a.at(2) << endl;

    cout << "Empty or not-> " << a.empty() << endl;

    cout << "First Element-> " << a.front() << endl;
    cout << "last Element-> " << a.back() << endl;

    return 0;
}

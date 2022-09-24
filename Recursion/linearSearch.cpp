#include <bits/stdc++.h>
using namespace std;

bool isFound(int arr[], int key, int size)
{
    if (size == 0)
        return false;
    if (arr[0] == key)
        return true;
    else
    {
        bool remainPart = isFound(arr + 1, key, size - 1);
        return remainPart;
    }
}

int main(int argc, char const *argv[])
{
    int arr[] = {1, 2, 45, 23, 65, 26, 11, 65, 34, 77, 2};
    int size = sizeof(arr) / sizeof(arr[0]);

    int key = 99;

    if (isFound(arr, key, size))
        cout << "Key is Present" << endl;
    else
        cout << "Key is Absent" << endl;

    return 0;
}
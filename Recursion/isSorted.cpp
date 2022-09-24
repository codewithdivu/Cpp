#include <bits/stdc++.h>
using namespace std;

bool isSorted(int arr[], int size)
{
    if (size == 1 || size == 0)
        return true;

    if (arr[0] > arr[1])
        return false;

    else
    {
        bool ans = isSorted(arr + 1, size - 1);
        return ans;
    }
}

int main(int argc, char const *argv[])
{
    int arr[] = {1, 2, 4, 6, 88, 9};
    int size = sizeof(arr) / sizeof(arr[0]);

    if (isSorted(arr, size))
    {
        cout << "Array is Sorted" << endl;
    }
    else
    {
        cout << "Not Sorted" << endl;
    }
    return 0;
}
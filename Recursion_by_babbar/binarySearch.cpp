#include <bits/stdc++.h>
using namespace std;

bool isFound(int arr[], int key, int start, int end)
{
    if (start > end)
        return false;

    int mid = start + (end - start) / 2;

    if (key == arr[mid])
        return true;

    else if (key > arr[mid])
    {
        return isFound(arr, key, mid + 1, end);
    }
    else
    {
        return isFound(arr, key, start, mid - 1);
    }
}

int main(int argc, char const *argv[])
{
    int arr[] = {1, 5, 9, 11, 55, 88, 95};
    int size = sizeof(arr) / sizeof(arr[0]);

    int key = 2;
    int start = 0;
    int end = size - 1;

    if (isFound(arr, key, start, end))
        cout << "element is Present" << endl;
    else
        cout << "element is Absent" << endl;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

void sortArray(int *arr, int n)
{
    if (n == 0 || n == 1)
    {
        return;
    }

    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
        }
    }

    sortArray(arr, n - 1);
}

int main(int argc, char const *argv[])
{
    int arr[] = {11, 65, 32, 5, 33, 78, 34, 99, 64, 23};
    int size = sizeof(arr) / sizeof(arr[0]);

    sortArray(arr, size);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

void swapAlternate(int *arr, int n)
{
    for (int i = 0; i < n; i = i + 2)
    {
        if (i + 1 < n)
            swap(arr[i], arr[i + 1]);
    }
}

int main(int argc, char const *argv[])
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int size = sizeof(arr) / sizeof(arr[0]);

    swapAlternate(arr, size);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
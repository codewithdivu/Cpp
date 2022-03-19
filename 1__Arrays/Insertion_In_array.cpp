#include <bits/stdc++.h>
using namespace std;

void insertion(int arr[], int size, int element, int position)
{
    for (int i = size; i > position; i--)
    {
        arr[i] = arr[i - 1];
    }
    size++;
    arr[position] = element;

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main(int argc, char const *argv[])
{
    int arr[] = {15, 54, 64, 78, 6, 99, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    insertion(arr, n, 999, 3);
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

void deletion(int arr[], int size, int index)
{
    for (int i = index; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    size--;

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main(int argc, char const *argv[])
{
    int arr[] = {15, 54, 64, 78, 6, 99, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    deletion(arr, n, 3);
    return 0;
}
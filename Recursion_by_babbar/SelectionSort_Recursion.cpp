#include <bits/stdc++.h>
using namespace std;

void print(int arr[], int size)
{
    for (int j = 0; j < size; j++)
    {
        cout << arr[j] << " ";
    }
    cout << endl;
}

void sortArray(int arr[], int size)
{
    print(arr, size);

    if (size == 0 || size == 1)
    {
        return;
    }
    for (int i = 1; i < size; i++)
    {
        if (arr[i] < arr[0])
        {
            swap(arr[i], arr[0]);
        }
    }

    sortArray(arr + 1, size - 1);
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
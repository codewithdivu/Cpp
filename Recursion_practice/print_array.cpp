#include <bits/stdc++.h>
using namespace std;

void printArray(int *arr, int count, int size)
{
    if (count == size)
    {
        return;
    }
    cout << arr[count] << " ";
    printArray(arr, count + 1, size);
}
void print(int *arr, int size)
{
    if (size == 0)
    {
        return;
    }
    cout << arr[0] << " ";
    print(arr + 1, size - 1);
}

int main(int argc, char const *argv[])
{
    int arr[] = {1, 3, 5, 7, 9, 11, 13, 15, 18};
    printArray(arr, 0, 9);
    print(arr, 9);
    return 0;
}
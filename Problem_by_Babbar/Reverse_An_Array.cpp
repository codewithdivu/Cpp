#include <bits/stdc++.h>
using namespace std;

void reverseArray(int arr[], int n)
{
    int start = 0;
    int end = n - 1;

    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main(int argc, char const *argv[])
{
    int arr[] = {11, 22, 33, 44, 55, 66};
    int brr[] = {-1, -2, 0, 1, 2};

    reverseArray(arr, 6);
    reverseArray(brr, 5);

    printArray(arr, 6);
    cout << endl;
    printArray(brr, 5);
    return 0;
}
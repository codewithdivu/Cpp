#include <bits/stdc++.h>
using namespace std;

int sumArray(int arr[], int size)
{
    if (size == 0)
        return 0;
    if (size == 1)
        return arr[0];

    int sum = arr[0] + sumArray(arr + 1, size - 1);
    return sum;
}

int main(int argc, char const *argv[])
{
    int arr[5];

    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    cout << "The sum of array is " << sumArray(arr, 5);
    return 0;
}
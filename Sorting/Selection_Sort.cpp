
// REMEMBER THIS THING IN SELECTION SORT
// -> Find minimum element is unsorted array and swap it with element at begining

// Space Complexity ---->  0(1)
// Time Complexity ---->  0(n^2)

// Best Case ----> 0(n^2)
// Worst Case ----> 0(n^2)
// Average Case ----> 0(n^2)

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int arr[15] = {3, 7, 0, 1, 5, 8, 3, 2, 34, 66, 87, 23, 12, 12, 12};
    int n = 15;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                swap(arr[j], arr[i]);
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
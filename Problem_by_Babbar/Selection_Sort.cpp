// Selection Sort

    // Space Complexity ---->  0(1)
    // Time Complexity ---->  0(n^2)
    
            // Best Case ----> 0(n^2)
            // Worst Case ----> 0(n^2)
            // Average Case ----> 0(n^2)

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int arr[] = {11, 65, 32, 5, 33, 78, 34, 99, 64, 23};
    int n = 10;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                swap(arr[i], arr[j]);
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
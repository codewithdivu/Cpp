// Bubble Sort

    // Space Complexity ---->  0(1)
    // Time Complexity ---->  0(n^2)
    
            // Best Case ----> 0(n)
            // Worst Case ----> 0(n^2)
            // Average Case ----> 0(n^2)

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int arr[] = {11, 65, 32, 5, 33, 78, 34, 99, 64, 23};
    int n = 10;

    bool swapped = false;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (swapped == false) // from this line of code time complexity will be decreasing 
        {
            break;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

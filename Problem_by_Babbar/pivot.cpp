#include <bits/stdc++.h>
using namespace std;

int getPivot(int arr[], int size)
{

    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;

    while (start < end)
    {

        mid = start + (end - start) / 2;

        if (arr[mid] >= arr[0])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
    } 
    return start;
}

int main(int argc, char const *argv[])
{
    int arr[5] = {3, 8, 10, 17, 1};

    cout << "Pivot is at index " << getPivot(arr, 5) << endl;

    return 0;
}
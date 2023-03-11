#include <bits/stdc++.h>
using namespace std;

int findPivot(vector<int> &arr)
{
    int start = 0;
    int end = arr.size() - 1;

    while (start <= end)
    {

        int mid = start + (end-start)/2;

        if (arr[mid] > arr[mid + 1])
        {
            return mid;
        }
        if (arr[mid - 1] > arr[mid])
        {
            return mid - 1;
        }

        if (arr[start] >= arr[mid])
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return -1;
}

int main(int argc, char const *argv[])
{
    vector<int> arr = {4, 5, 6, 7, 0, 1};

    int ansIndex = findPivot(arr);

    cout << "answer at index is " << ansIndex << endl;
    cout << "answer is " << arr[ansIndex] << endl;

    return 0;
}
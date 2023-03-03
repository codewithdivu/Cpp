#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> &arr, int target)
{
    int start = 0;
    int end = arr.size() - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] > target)
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
    vector<int> arr = {-1, 0, 3, 5, 9, 12};
    int target = 9;

    int ansIndex = binarySearch(arr, target);
    cout << "element is at index " << ansIndex << endl;

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> &arr, int target, int start, int end)
{

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

int findPivot(vector<int> &arr)
{
    int start = 0;
    int end = arr.size() - 1;

    while (start <= end)
    {

        int mid = start + (end - start) / 2;

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

int searchInRotatedArray(vector<int> &arr, int target)
{
    int pivotIndex = findPivot(arr);

    if (arr[0] >= target && arr[pivotIndex - 1] <= target)
    {
        return binary_search(arr, target, 0, pivotIndex - 1);
    }
    else
    {
        return binary_search(arr, target, pivotIndex, arr.size() - 1);
    }
    return -1;
}

int main(int argc, char const *argv[])
{
    vector<int> arr = {4, 5, 6, 7, 0, 1, 2};
    int target = 0;

    int ansIndex = searchInRotatedArray(arr, target);

    cout << "element is at index " << ansIndex << endl;

    return 0;
}
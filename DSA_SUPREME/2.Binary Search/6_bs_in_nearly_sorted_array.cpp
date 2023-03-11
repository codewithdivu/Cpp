#include <bits/stdc++.h>
using namespace std;

int bs_in_nearlySortedArray(vector<int> &arr, int target)
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
        if (mid - 1 >= 0 && arr[mid - 1] == target)
        {
            return mid - 1;
        }
        if (mid + 1 <= arr.size() - 1 && arr[mid + 1] == target)
        {
            return mid + 1;
        }

        if (arr[mid] > target)
        {
            end = mid - 2;
        }
        else
        {
            start = mid + 2;
        }
    }
    return -1;
}

int main(int argc, char const *argv[])
{
    vector<int> arr = {10, 3, 40, 20, 50, 80, 70};
    int target = 50;

    int ansIndex = bs_in_nearlySortedArray(arr, target);

    cout << "answer at index is " << ansIndex << endl;
    cout << "answer is " << arr[ansIndex] << endl;

    return 0;
}
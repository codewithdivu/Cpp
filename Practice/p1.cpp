#include <bits/stdc++.h>
using namespace std;

int bs_in_nearly_sorted_arr(vector<int> arr, int target)
{

    int start = 0;
    inti end = arr.size() - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] == target)
        {
            return mid;
        }
        if (arr[mid - 1] == target)
        {
            return mid - 1;
        }
        if (arr[mid + 1] == target)
        {
            return mid + 1;
        }

        if (target > arr[mid])
        {
            start = mid + 2;
        }
        else
        {
            end = mid - 2;
        }
    }
    return -1;
}

int main(int argc, char const *argv[])
{
    vector<int> arr = {10, 3, 40, 20, 50, 80, 70};
    int target = 40;
    
    return 0;
}
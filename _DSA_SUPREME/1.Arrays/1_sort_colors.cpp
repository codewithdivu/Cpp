#include <bits/stdc++.h>
using namespace std;

void sortColors(vector<int> &nums)
{
    int low = 0;
    int mid = 0;
    int high = nums.size() - 1;

    while (mid <= high)
    {
        if (nums[mid] == 0)
        {
            swap(nums[low], nums[mid]);
            low++;
            mid++;
        }
        else if (nums[mid] == 1)
        {
            mid++;
        }
        else if (nums[mid] == 2)
        {
            swap(nums[mid], nums[high]);
            high--;
        }
    }
}

int main(int argc, char const *argv[])
{
    vector<int> arr = {2, 0, 2, 1, 1, 0};
    sortColors(arr);

    for (auto it : arr)
    {
        cout << it << " ";
    }

    return 0;
}
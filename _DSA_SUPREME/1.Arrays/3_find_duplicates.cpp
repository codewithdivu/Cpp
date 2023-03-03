#include <bits/stdc++.h>
using namespace std;

int findDuplicate(vector<int> &nums)
{

    int ans = -1;

    for (int i = 0; i < nums.size(); i++)
    {
        int index = abs(nums[i]);
        if (nums[index] < 0)
        {
            ans = index;
            break;
        }
        else
        {
            nums[index] *= -1;
        }
    }
    return ans;
}

int main(int argc, char const *argv[])
{
    vector<int> arr = {};

    int answer = findDuplicate(arr);
    cout << "answer is " << answer << endl;
    return 0;
}
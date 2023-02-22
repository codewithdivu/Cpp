#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> &arr)
{
    int start = 0;
    int end = arr.size() - 1;

    while (start <= end)
    {

        int mid = start + (end - start) / 2;

        if (start == end)
        {
            return arr[start];
        }

        if (mid % 2 == 0)
        {
            if (arr[mid] == arr[mid + 1])
            {
                start = mid + 2;
            }
            else
            {
                end = mid;
            }
        }
        if (mid % 2 == 1)
        {
            if (arr[mid] == arr[mid - 1])
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
    }

    return -1;
}

int main(int argc, char const *argv[])
{
    vector<int> arr = {1, 1, 2, 2, 3, 3, 4, 4, 3, 6, 6, 4, 4};

    int answer = solve(arr);

    cout << "answer is " << answer << endl;
    return 0;
}
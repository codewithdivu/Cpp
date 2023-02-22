#include <bits/stdc++.h>
using namespace std;

int findPeakElement(vector<int> &arr)
{
    int start = 0;
    int end = arr.size() - 1;

    while (start < end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] < arr[mid + 1])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
    }
    return start; // or you can return end
}

int main(int argc, char const *argv[])
{
    vector<int> arr = {1, 2, 1, 3, 5, 6, 4};

    int ansIndex = findPeakElement(arr);
    cout << "answer at index is " << ansIndex << endl;
    cout << "answer is " << arr[ansIndex] << endl;
    return 0;
}
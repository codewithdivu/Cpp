#include <bits/stdc++.h>
using namespace std;


/// problem is count total number of subSequences whose sum is equal to this sum


int subSequences(int arr[], int sum, int index, int size, int key, int &count)
{
    if (index >= size)
    {
        if (sum == key)
        {
            return 1;
        }
        return 0;
    }

    // take
    sum = sum + arr[index];
    int left = subSequences(arr, sum, index + 1, size, key, count);

    // not-take
    sum = sum - arr[index];
    int right = subSequences(arr, sum, index + 1, size, key, count);

    return left + right;
}

int main(int argc, char const *argv[])
{
    int arr[] = {1, 2, 1};
    int key = 2;
    vector<int> ds;
    int count = 0;
    cout << subSequences(arr, 0, 0, 3, key, count);

    // cout << "total is " << count << endl;
    return 0;
}
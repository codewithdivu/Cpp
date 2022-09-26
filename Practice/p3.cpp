#include <bits/stdc++.h>
using namespace std;

bool subSequences(int arr[], int index, int size, vector<int> &ds, int &sum, int key)
{
    if (index == size)
    {
        if (sum == key)
        {
            return 1;
        }

        return 0;
    }

    sum = sum + arr[index];
    int left = subSequences(arr, index + 1, size, ds, sum, key);

    sum = sum - arr[index];
    int right = subSequences(arr, index + 1, size, ds, sum, key);
    return left + right;
}

int main(int argc, char const *argv[])
{
    int arr[] = {1, 2, 1};
    vector<int> ds;
    int sum = 0;
    cout << subSequences(arr, 0, 3, ds, sum, 2);
    return 0;
}
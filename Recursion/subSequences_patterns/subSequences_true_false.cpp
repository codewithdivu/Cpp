#include <bits/stdc++.h>
using namespace std;

/// problem is print the any one subsequence whose sum is equal to this sum


bool subSequences(int arr[], int sum, int index, int size, int key, vector<int> ds)
{
    if (index >= size)
    {
        if (sum == key)
        {
            for (auto it : ds)
            {
                cout << it << " ";
            }
            cout << endl;
            return true;
        }
        else
            return false;
    }

    // take
    ds.push_back(arr[index]);
    sum = sum + arr[index];

    if (subSequences(arr, sum, index + 1, size, key, ds) == true)
    {
        return true;
    }

    // not-take
    sum = sum - arr[index];
    ds.pop_back();

    if (subSequences(arr, sum, index + 1, size, key, ds) == true)
    {
        return true;
    }


    
    return false;
}

int main(int argc, char const *argv[])
{
    int arr[] = {1, 2, 1};
    int key = 2;
    vector<int> ds;
    subSequences(arr, 0, 0, 3, key, ds);

    return 0;
}
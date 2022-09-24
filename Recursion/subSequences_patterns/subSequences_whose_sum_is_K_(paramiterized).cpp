#include <bits/stdc++.h>
using namespace std;

/// print the all the subsequences whose sum is equal to this sum

void subSequences(int arr[], int sum, int index, int size, int key, vector<int> ds)
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
        }
        return;
    }

    // take
    ds.push_back(arr[index]);
    sum = sum + arr[index];
    subSequences(arr, sum, index + 1, size, key, ds);

    // not-take
    sum = sum - arr[index];
    ds.pop_back();
    subSequences(arr, sum, index + 1, size, key, ds);
}

int main(int argc, char const *argv[])
{
    int arr[] = {1, 3, 2};
    int key = 2;
    vector<int> ds;
    subSequences(arr, 0, 0, 3, key, ds);

    return 0;
}
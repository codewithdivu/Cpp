#include <bits/stdc++.h>
using namespace std;

// print the all possible subsequences

void subSequences(int arr[], vector<int> &ds, int index, int size)
{
    if (index >= size)
    {
        for (auto it : ds)
        {
            cout << it << " ";
        }

        if (ds.size() == 0)
        {
            cout << "{}";
        }
        cout << endl;
        return;
    }

    // take
    ds.push_back(arr[index]);
    subSequences(arr, ds, index + 1, size);

    // not-take
    ds.pop_back();
    subSequences(arr, ds, index + 1, size);
}

int main(int argc, char const *argv[])
{
    int arr[] = {1, 2, 3};
    vector<int> ds;

    subSequences(arr, ds, 0, 3);

    return 0;
}
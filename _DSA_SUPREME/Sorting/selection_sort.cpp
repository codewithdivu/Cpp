#include <bits/stdc++.h>
using namespace std;

void selectionSort(vector<int> &arr)
{
    for (int i = 0; i < arr.size() - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }

        swap(arr[i], arr[minIndex]);
    }
}

int main(int argc, char const *argv[])
{
    vector<int> arr = {3, 7, 0, 1, 5, 8, 3, 2, 34, 66, 87, 23, 12, 12, 12};

    selectionSort(arr);

    for (auto it : arr)
    {
        cout << it << " ";
    }
    return 0;
}
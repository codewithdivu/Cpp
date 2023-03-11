#include <bits/stdc++.h>
using namespace std;

void insertionSort(vector<int> &arr)
{
    for (int i = 1; i < arr.size(); i++)
    {

        int temp = arr[i];
        int j;
        for (j = i - 1; j >= 0; j--)
        {
            if (temp < arr[j])
            {
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
        }
        arr[j + 1] = temp;
    }
}

int main(int argc, char const *argv[])
{
    vector<int> arr = {3, 7, 0, 1, 5, 8, 3, 2, 34, 66, 87, 23, 12, 12, 12};

    insertionSort(arr);

    for (auto it : arr)
    {
        cout << it << " ";
    }
    return 0;
    return 0;
}
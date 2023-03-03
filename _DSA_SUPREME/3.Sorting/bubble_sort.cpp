#include <bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int> &arr)
{
    for (int round = 1; round < arr.size(); round++)
    {
        bool swapped = false;
        for (int j = 0; j < arr.size() - round; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        // if there is no swap so means array is already sort so need of further check or round
        if (swapped == false)
        {
            break;
        }
    }
}

int main(int argc, char const *argv[])
{
    vector<int> arr = {3, 7, 0, 1, 5, 8, 3, 2, 34, 66, 87, 23, 12, 12, 12};

    bubbleSort(arr);

    for (auto it : arr)
    {
        cout << it << " ";
    }
    return 0;
}
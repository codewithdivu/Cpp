#include <bits/stdc++.h>
using namespace std;

void quickSort(int arr[], inti start, int end)
{
    
}

int main(int argc, char const *argv[])
{
    int arr[10] = {2, 4, 1, 6, 9, 9, 9, 9, 9, 9};
    int n = 10;

    quickSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int maxx(int arr[], int size)
{
    static int minnn = INT_MIN;
    static int i = 0;
    if (i == size)
    {
        return 0;
    }
    if (minnn < arr[i])
    {
        minnn = arr[i];
    }
    i++;
    maxx(arr, size);
    return minnn;
}

int main(int argc, char const *argv[])
{
    int arr[] = {1, 88, 45, 97, 45, 2, 4, 67, 77};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << maxx(arr, size);
    return 0;
}
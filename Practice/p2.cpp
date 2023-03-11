#include <bits/stdc++.h>
using namespace std;

void findMax(int arr[], int &maxu, int size)
{
    if (size == 0)
    {
        return;
    }

    if (arr[0] > maxu)
    {
        maxu = arr[0];
    }

    findMax(arr + 1, maxu, size - 1);
}

int main(int argc, char const *argv[])
{
    int arr[] = {1, 88, 45, 97, 45, 2, 444, 67, 77};
    int size = sizeof(arr) / sizeof(arr[0]);
    int maxu = INT_MIN;

    findMax(arr, maxu, size);
    cout << "maximum is " << maxu << endl;
    return 0;
}
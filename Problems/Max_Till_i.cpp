#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{

    int mx = INT_MIN;

    int arr[15] = {3, 7, 0, 1, 5, 8, 3, 2, 34, 66, 87, 23, 12, 12, 12};

    for (int i = 0; i < 15; i++)
    {
        mx = max(mx, arr[i]);
        cout << mx << " ";
    }

    return 0;
}
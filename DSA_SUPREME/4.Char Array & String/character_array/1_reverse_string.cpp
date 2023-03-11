#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    char arr[7];
    cin >> arr;

    int start = 0;
    int end = 6;

    while (start <= end)
    {
        swap(arr[start++], arr[end--]);
    }

    cout << arr << endl;
    return 0;
}
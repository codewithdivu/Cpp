#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    char arr[100];
    cin.getline(arr, 100);
    int n = strlen(arr);

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == ' ')
        {
            arr[i] = '@';
        }
    }

    cout << arr << endl;

    return 0;
}
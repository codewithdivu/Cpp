#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    char arr[100];
    cin.getline(arr, 100);

    int size = strlen(arr);

    for (int i = 0; i < size; i++)
    {
        if (arr[i] != ' ')
        {
            // arr[i] = arr[i] - 'a' + 'A'; // lower to upper
            arr[i] = arr[i] - 'A' + 'a'; // upper to lower
        }
    }

    cout << arr << endl;

    return 0;
}
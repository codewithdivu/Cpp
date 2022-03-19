#include <bits/stdc++.h>
using namespace std;
/*
1
2 1
3 2 1
4 3 2 1
*/
int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    // int i = 1;
    // while (i <= n)
    // {
    //     int j = 1;
    //     int val = i;
    //     while (j <= i)
    //     {
    //         cout << val;
    //         val--;
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << i - j + 1;
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}
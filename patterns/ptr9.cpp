#include <bits/stdc++.h>
using namespace std;
/*
1
2 3
3 4 5
4 5 6 7
5 6 7 8 9
*/
int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    // int i = 1;
    // while (i <= n)
    // {
    //     int j = 1;
    //     int l = i;
    //     while (j <= i)
    //     {
    //         cout << l << " ";
    //         j++;
    //         l++;
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
            cout << i + j - 1 << " ";
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}
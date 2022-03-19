#include <bits/stdc++.h>
using namespace std;
/*
1
22
333
4444
*/
int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << i;
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}
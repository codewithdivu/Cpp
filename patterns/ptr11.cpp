#include <bits/stdc++.h>
using namespace std;
/*
AAAA
BBBB
CCCC
DDDD
*/
int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            char ch = 'A' + i - 1;
            cout << ch;
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}
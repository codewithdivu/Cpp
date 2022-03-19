#include <bits/stdc++.h>
using namespace std;
/*
ABCD
EFGH
IJKL
MNOP
*/
int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    int i = 1;
    int counter = 0;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            char ch = 'A' + counter;
            cout << ch;
            counter++;
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;
/*
123
456
789
*/
int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    int i = 1;
    int counter = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << counter;
            counter++;
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}
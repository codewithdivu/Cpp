#include <bits/stdc++.h>
using namespace std;

int count(int n)
{
    static int i = 0;
    if (n == 0)
    {
        return 0;
    }
    n = n / 10;
    i++;
    count(n);
    return i;
}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    cout << count(n) << endl;
    return 0;
}
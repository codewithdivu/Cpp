#include <bits/stdc++.h>
using namespace std;

int poww(int n)
{
    if (n == 0)
    {
        return n;
    }
    return 2 * pow(2, n - 1);
}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    cout << "2^" << n << " is " << poww(n) << endl;
    return 0;
}
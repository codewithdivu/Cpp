#include <bits/stdc++.h>
using namespace std;

int expo(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return 2 * expo(n - 1);
}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    cout << "2^" << n << " is the " << expo(n) << endl;
    return 0;
}
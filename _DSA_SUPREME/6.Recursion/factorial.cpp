#include <bits/stdc++.h>
using namespace std;

int factorial(int num)
{
    if (n == 0 || n == 1)
    {
        return n;
    }

    return n * factorial(n - 1);
}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    cout << factorial(n) << endl;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    while (a != b)
    {
        if (a > b)
            return gcd(a - b, b);
        else
            return gcd(a, b - a);
    }
    return a;
}

int main(int argc, char const *argv[])
{
    int a = 10;
    int b = 50;
    cout << "GCD is " << gcd(a, b) << endl;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    if (a == 0)
    {
        return b;
    }
    if (b == 0)
    {
        return a;
    }

    if (a > b)
    {
        return gcd(a - b, b);
    }
    else
    {
        return gcd(b - a, a);
    }
}
// int gcd(int a, int b)
// {
//     while (a != b)
//     {
//         if (a > b)
//             return gcd(a - b, b);
//         else
//             return gcd(a, b - a);
//     }
//     return a;
// }

int main(int argc, char const *argv[])
{
    int a = 72;
    int b = 24;
    cout << "GCD is " << gcd(a, b) << endl;
    return 0;
}
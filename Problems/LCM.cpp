#include <bits/stdc++.h>
using namespace std;

int GCD(int a, int b)
{
    if (a == 0)
    {
        return b;
    }
    if (b == 0)
    {
        return a;
    }

    while (a != 0 && b != 0)
    {
        if (a > b)
        {
            a = a - b;
        }
        else
        {
            b = b - a;
        }
    }

    int answer = a == 0 ? b : a;
    return answer;
}

int main(int argc, char const *argv[])
{
    int a, b;
    cin >> a >> b;

    int gcd = GCD(a, b);

    // LCM(A, B) = (A * B) / GCD(A, B)

    int lcm = (a * b) / gcd;

    cout << "LCM of a and b is : " << lcm << endl;

    return 0;
}
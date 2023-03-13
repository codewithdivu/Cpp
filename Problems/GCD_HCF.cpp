
// BASED ON INCLUSION-EXCLUSION PRINCIPLE

#include <bits/stdc++.h>
using namespace std;

// oldest way
int GCD_old(int a, int b)
{
    while (b != 0)
    {
        int rem = a % b;
        a = b;
        b = rem;
    }
    return a;
}

// new way

// gcd(a,b) = gcd(a-b,b) if a>b  or  gcd(b-a,a) if b>a

int GCD_new(int a, int b)
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

    // cout << GCD_old(a, b) << endl;
    cout << GCD_new(a, b) << endl;
    return 0;
}
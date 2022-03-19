
// BASED ON INCLUSION-EXCLUSION PRINCIPLE

#include <bits/stdc++.h>
using namespace std;

int GCD(int a, int b)
{
    while (b != 0)
    {
        int rem = a % b;
        a = b;
        b = rem;
    }
    return a;
}

int main(int argc, char const *argv[])
{
    int a, b;
    cin >> a >> b;

    cout << GCD(a, b) << endl;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int powwer(int a, int b)
{
    if (b == 0)
    {
        return 1;
    }
    if (b == 1)
    {
        return a;
    }

    int ans = powwer(a, b / 2);

    if (b % 2 == 0)
    {
        return ans * ans;
    }
    else
    {
        return a * ans * ans;
    }
}

int main(int argc, char const *argv[])
{
    int a, b;
    cin >> a >> b;

    cout << "a^b is " << powwer(a, b) << endl;

    return 0;
}
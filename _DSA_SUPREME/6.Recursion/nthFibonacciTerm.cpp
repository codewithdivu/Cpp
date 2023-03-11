#include <bits/stdc++.h>
using namespace std;

int fibo(int num)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    return fibo(n - 1) + fibo(n - 2);
}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    cout << fibo(n) << endl;
    return 0;
}
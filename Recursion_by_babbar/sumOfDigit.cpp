#include <bits/stdc++.h>
using namespace std;

int sumOfDigit(int n)
{
    if (n <= 0)
    {
        return 0;
    }
    static int sum = 0;
    int lastdigit = n % 10;
    sum = sum + lastdigit;
    sumOfDigit(n / 10);
    return sum;
}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    cout << sumOfDigit(n);
    return 0;
}
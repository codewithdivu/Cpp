#include <bits/stdc++.h>
using namespace std;

int sumOfDigits(int num)
{
    static int sum = 0;
    if (num <= 0)
    {
        return 0;
    }
    sum += num % 10;
    sumOfDigits(num / 10);
    return sum;
}

int main(int argc, char const *argv[])
{
    int n = 125;
    cout << sumOfDigits(n) << endl;
    return 0;
}
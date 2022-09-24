#include <bits/stdc++.h>
using namespace std;

int sumNthNumber(int num)
{
    if (num == 0 || num == 1)
    {
        return num;
    }
    return num + sumNthNumber(num - 1);
}

int main(int argc, char const *argv[])
{
    int n = 5;

    cout << "sum is " << sumNthNumber(n);
    return 0;
}
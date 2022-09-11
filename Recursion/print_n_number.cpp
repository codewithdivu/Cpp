#include <bits/stdc++.h>
using namespace std;

void printNthNumber(int num)
{
    if (num <= 0)
    {
        return;
    }
    printNthNumber(num - 1);
    cout << num << " ";
}

int main(int argc, char const *argv[])
{
    int n = 50;

    printNthNumber(n);

    return 0;
}
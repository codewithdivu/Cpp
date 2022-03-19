#include <bits/stdc++.h>
using namespace std;

void printNthTerm(int n)
{
    if (n == 0)
    {
        return;
    }
    printNthTerm(n - 1);
    cout << n << " ";
}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    printNthTerm(n);
    return 0;
}
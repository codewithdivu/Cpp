#include <bits/stdc++.h>
using namespace std;

void primeFactor(int n)
{
    int spf[100] = {0};
    for (int i = 2; i <= n; i++)
    {
        spf[i] = i;
    }
    for (int i = 2; i <= n; i++)
    {
        if (spf[i] == i)
        {
            for (int j = i * i; j <= n; j++)
            {
                if (spf[j] == j)
                {
                    spf[j] = i;
                }
            }
        }
    }

    while (n != 0)
    {
        cout << spf[n] << " ";
        n = n / spf[n];
    }
}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    primeFactor(n);
    return 0;
}
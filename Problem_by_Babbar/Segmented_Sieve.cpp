#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    vector<bool> primes(n + 1, true);

    for (int i = 2; i < n; i++)
    {
        if (primes[i])
        {
            cout << i << " ";
            for (int j = i * i; j < n; j += i)
            {
                primes[j] = 0;
            }
        }
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int cnt = 0;
    vector<bool> prime(n + 1, true);
    prime[0] = prime[1] = false;

    for (int i = 2; i < n; i++)
    {
        if (prime[i])
        {
            cnt++;
            for (int j = i * 2; j < n; j = j + i)
            {
                prime[j] = 0;
            }
        }
    }
    cout << "the numbers of primes between n is " << cnt << endl;
    return 0;
}
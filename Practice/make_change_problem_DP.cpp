#include <bits/stdc++.h>
using namespace std;

long getNumberOfWays(long N, vector<long> Coins)
{
    vector<long> ways(N + 1);
    ways[0] = 1;

    for (int i = 0; i < Coins.size(); i++)
    {
        for (int j = 0; j < ways.size(); j++)
        {
            if (Coins[i] <= j)
            {
                ways[j] += ways[(j - Coins[i])];
            }
        }
    }
    return ways[N];
}

void printArray(vector<long> coins)
{
    for (long i : coins)
        cout << i << "\n";
}

int main()
{
    vector<long> Coins = {1, 5, 10};

    cout << "The Coins Array:" << endl;
    printArray(Coins);

    cout << "Solution: ";
    cout << getNumberOfWays(12, Coins) << endl;
    return 0;
}

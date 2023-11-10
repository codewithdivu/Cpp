#include <bits/stdc++.h>
using namespace std;

// ----------------Recursion------------------------

int fibo(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    return fibo(n - 1) + fibo(n - 2);
}

// ----------------Recursion + Memoization------------------------

int fiboMemoization(int n, vector<int> &dp)
{
    if (n == 0 || n == 1)
    {
        return n;
    }

    if (dp[n] != -1)
    {
        return dp[n];
    }

    dp[n] = fiboMemoization(n - 1, dp) + fiboMemoization(n - 2, dp);
    return dp[n];
}

// ----------------Tabulation------------------------

int fiboTabulation(int n)
{
    vector<int> dp(n + 1, -1);
    dp[0] = 0;
    dp[1] = 1;

    for (int i = 2; i <= n; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2];
    }

    return dp[n];
}

// ----------------Tabulation + Space Optimazation------------------------

int fiboSpaceOptimazation(int n)
{
    int prev1 = 0;
    int prev2 = 1;

    for (int i = 2; i <= n; i++)
    {
        int curr = prev1 + prev2;
        prev1 = prev2;
        prev2 = curr;
    }

    return prev2;
}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    cout << n << "th fibo term is " << fibo(n) << endl;

    vector<int> dp(n + 1, -1);
    cout << n << "th fibo term is " << fiboMemoization(n, dp) << endl;

    cout << n << "th fibo term is " << fiboTabulation(n) << endl;

    cout << n << "th fibo term is " << fiboSpaceOptimazation(n) << endl;
    return 0;
}
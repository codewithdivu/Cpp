#include <bits/stdc++.h>
using namespace std;

int solveLCS(string &first, string &second, int i, int j, vector<vector<int>> &dp)
{

    if (i == first.length())
    {
        return 0;
    }
    if (j == second.length())
    {
        return 0;
    }

    if (dp[i][j] != -1)
    {
        return dp[i][j];
    }

    int ans = 0;

    if (first[i] == second[j])
    {
        ans = 1 + solveLCS(first, second, i + 1, j + 1, dp);
    }
    else
    {
        ans = max(solveLCS(first, second, i + 1, j, dp), solveLCS(first, second, i, j + 1, dp));
    }
    return dp[i][j] = ans;
}

int main(int argc, char const *argv[])
{
    string text1 = "abcde";
    string text2 = "ace";
    vector<vector<int>> dp(text1.length(), vector<int>(text2.length(), -1));
    int answer = solveLCS(text1, text2, 0, 0, dp);
    cout << "longest common subsequences is " << answer << endl;
    return 0;
}
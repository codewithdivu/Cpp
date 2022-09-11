
//  TOP-DOWN APPROACH
// T.C = O(N), S(C) = O(N)+o(N)

// #include <bits/stdc++.h>
// using namespace std;

// int fibo(int num, vector<int> dp)
// {
//     if (num <= 1)
//     {
//         return num;
//     }

//     if (dp[num] != -1)
//     {
//         return dp[num];
//     }

//     dp[num] = fibo(num - 1, dp) + fibo(num - 2, dp);
//     return dp[num];
// }

// int main(int argc, char const *argv[])
// {
//     int n;
//     cin >> n;
//     vector<int> dp(n + 1, -1);

//     cout << fibo(n, dp) << endl;
//     return 0;
// }

//  BOTTOM-UP APPROACH
// T.C = O(N), S(C) = O(N)

// #include <bits/stdc++.h>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     int n;
//     cin >> n;

//     vector<int> dp(n + 1, 0);
//     dp[0] = 0;
//     dp[1] = 1;

//     for (int i = 2; i <= n; i++)
//     {
//         dp[i] = dp[i - 1] = dp[i - 2];
//     }
//     cout << "answer is " << dp[n] << endl;
//     return 0;
// }


//  SPACE OPTIMIZATION APPROACH
// T.C = O(N), S(C) = O(N)

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    int prev = 0;
    int prev2 = 1;

    for (int i = 2; i <= n; i++)
    {
        int curr = prev + prev2;
        prev2 = prev;
        prev = curr;
    }
    cout << "answer is " << prev << endl;
    return 0;
}
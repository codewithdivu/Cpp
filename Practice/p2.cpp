#include <bits/stdc++.h>
using namespace std;

int solve(int dividend, int divisor)
{
    int start = 0;
    int end = dividend;
    int ans = -1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (mid * divisor == dividend)
        {
            return mid;
        }
        else if (mid * divisor > dividend)
        {
            end = mid - 1;
        }
        else if (mid * divisor < dividend)
        {
            ans = mid;
            start = mid + 1;
        }
    }
    return ans;
}

int main(int argc, char const *argv[])
{
    int dividend = 22;
    int divisor = 7;

    int ans = solve(dividend, divisor);
    cout << "ans is " << ans << endl;
    return 0;
}
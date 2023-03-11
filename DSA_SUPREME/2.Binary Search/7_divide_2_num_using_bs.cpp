#include <bits/stdc++.h>
using namespace std;

int divide(int dividend, int divisor)
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

    // for negative number handler

    if ((divisor < 0 && dividend < 0) || (divisor > 0 && dividend > 0))
    {
        return ans;
    }
    return -ans;
}

int main(int argc, char const *argv[])
{
    int dividend = 22;
    int divisor = 7;

    int answer = divide(dividend, divisor);

    cout << "answer is " << answer << endl;

    return 0;
}
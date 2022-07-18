#include <bits/stdc++.h>
using namespace std;

long long int sqrtInteger(int num)
{
    int start = 0;
    int end = num;
    long long int mid = start + (end - start) / 2;
    long long int ans = -1;

    while (start <= end)
    {
        mid = start + (end - start) / 2;

        long long int square = mid * mid;

        if (square == num)
        {
            return mid;
        }
        if (square > num)
        {
            end = mid - 1;
        }
        else if (square < num)
        {
            ans = mid;
            start = mid + 1;
        }
    }
    return ans;
}

double morePrecision(int n, int precision, int tempAns)
{

    double factor = 1;
    double ans = tempAns;

    for (double i = 0; i < precision; i++)
    {
        factor = factor / 10;

        for (double j = ans; j * j <= n; j = j + factor)
        {
            ans = j;
        }
    }
    return ans;
}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    long long int temAns = sqrtInteger(n);

    cout << "ans is " << morePrecision(n, 4, temAns) << endl;

    return 0;
}
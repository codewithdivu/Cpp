#include <bits/stdc++.h>
using namespace std;

int sqrt(int element)
{
    int start = 0;
    int end = element;

    int answer = -1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (mid * mid == element)
        {
            return mid;
        }
        else if (mid * mid > element)
        {
            end = mid - 1;
        }
        else if (mid * mid < element)
        {
            answer = mid;
            start = mid + 1;
        }
    }
    return answer;
}

double getPrecision(int answer)
{
    double finalAns = answer;
    double step = 0.1;

    for (int i = 0; i < 5; i++)
    {
        for (int j = finalAns; j * j <= answer; j += step)
        {
            finalAns = j;
        }
        step = step / 10;
    }
    return double;
}

int main(int argc, char const *argv[])
{
    int num = 8;

    int ans = sqrt(num);
    cout << "answer is " << ans << endl;

    return 0;
}
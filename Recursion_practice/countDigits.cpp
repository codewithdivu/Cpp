#include <bits/stdc++.h>
using namespace std;

int countDigits(int num)
{
    static int count = 0;
    if (num <= 0)
    {
        return 0;
    }
    count++;
    countDigits(num / 10);
    return count;
}

int main(int argc, char const *argv[])
{
    int n = 14;
    cout << "digits is " << countDigits(n) << endl;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

void number(int n, string arr[])
{
    if (n == 0)
    {
        return;
    }
    number(n / 10, arr);
    cout << arr[n % 10] << " ";
}

int main(int argc, char const *argv[])
{
    string arr[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    int n;
    cin >> n;

    number(n,arr);
    return 0;
}
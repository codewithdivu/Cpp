#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string str, int s, int e)
{
    bool ans;
    if (str[s] != str[e])
    {
        // ans = false;
        return false;
    }
    if (str[s] == str[e])
    {
        ans = true;
    }

    s++;
    e--;
    isPalindrome(str, s, e);
    return ans;
}

int main(int argc, char const *argv[])
{
    string str;
    cin >> str;
    int start = 0;
    int end = str.length() - 1;

    if (isPalindrome(str, start, end))
    {
        cout << "String is PALINDROME" << endl;
    }
    else
    {
        cout << "String is NOT palindrome" << endl;
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s, int i, int j)
{

    while (i <= j)
    {
        if (s[i] != s[j])
        {
            return false;
        }
        else
        {
            i++;
            j--;
        }
    }
    return true;
}

bool validPalindrome(string s)
{
    int i = 0;
    int j = s.length();

    while (i <= j)
    {
        if (s[i] == s[j])
        {
            i++;
            j--;
        }
        else
        {
            bool firstCheck = isPalindrome(s, i + 1, j);
            bool secondCheck = isPalindrome(s, i, j - 1);
            return firstCheck || secondCheck;
        }
    }
}

int main(int argc, char const *argv[])
{
    // leetcode - 680

    // string s = "aba";
    string s = "abca";

    if (validPalindrome(s))
    {
        cout << "yes..." << endl;
    }
    else
    {
        cout << "no...." << endl;
    }

    return 0;
}
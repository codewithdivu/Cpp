#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string str, int start, int end)
{
    if (str[start] != str[end])
    {
        return false;
    }
    if (start > end)
    {
        return true;
    }
    start++;
    end--;
    return isPalindrome(str, start, end);
}

int main(int argc, char const *argv[])
{
    string str = "nitin";
    int start = 0;
    int end = str.length() - 1;
    if (isPalindrome(str, start, end))
    {
        cout << "PALINDROME" << endl;
    }
    else
    {
        cout << "NOT-PALINDROME" << endl;
    }

    return 0;
}
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

/*
#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string str, int i)
{
    if (i >= str.length() / 2)
    {
        return true;
    }
    if (str[i] != str[str.length() - 1 - i])
    {
        return false;
    }
    return isPalindrome(str, i + 1);
}

int main(int argc, char const *argv[])
{
    string str = "naya";
    if (isPalindrome(str, 0))
    {
        cout << "ha bhai palindrome chhe" << endl;
    }
    else
    {
        cout << "nathi bhai" << endl;
    }
    return 0;
}
*/
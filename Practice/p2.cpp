#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s)
{
    int size = s.length();
    
    for (int i = 0; i < size; i++)
    {
        if (s[i] < 'A' || s[i] > 'Z' && s[i] < 'a' || s[i] > 'z')
        {
            s.erase(i, 1);
            i--;
        }
        if (isupper(s[i]))
        {
            s[i] = tolower(s[i]);
        }
    }
    // bool isPalindrome = false;
    int len = s.length();
    for (int i = 0; i < len; i++)
    {
        if (s[i] != s[len - 1 - i])
        {
            return false;
        }
    }
    return true;
}

int main(int argc, char const *argv[])
{
    string str;
    cin>>str;

    if(isPalindrome(str)){
        cout<<"isPalindrome"<<endl;
    }
    else{
        cout<<"Not palindrome"<<endl;
    }
    return 0;
}
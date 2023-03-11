#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    char arr[100];
    cin.getline(arr, 100);
    int start = 0;
    int end = strlen(arr) - 1;

    bool isPalindrome = true;
    while (start <= end)
    {
        if (arr[start] != arr[end])
        {
            isPalindrome = false;
            break;
        }
        start++;
        end--;
    }

    if (isPalindrome == false)
    {
        cout << "not a palindrome" << endl;
    }
    else
    {
        cout << "PALINDROME" << endl;
    }

    return 0;
}
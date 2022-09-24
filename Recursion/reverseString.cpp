#include <bits/stdc++.h>
using namespace std;

void reverseString(string &str, int s, int e)
{
    if (s > e)
        return;

    swap(str[s], str[e]);
    s++;
    e--;
    reverseString(str, s, e);
}

int main(int argc, char const *argv[])
{
    string str;
    cin >> str;
    int start = 0;
    int end = str.length() - 1;
    reverseString(str, start, end);
    cout<<str<<endl;
    return 0;
}

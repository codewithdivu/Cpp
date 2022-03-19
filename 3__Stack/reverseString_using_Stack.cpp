#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    string str;
    cin>>str;

    stack<char> s;

    for (int i = 0; i < str.length(); i++)
    {
        s.push(str[i]);
    }

    string ans = "";

    while (!s.empty())
    {
        char ch = s.top();
        s.pop();
        ans.push_back(ch);
    }

    cout << "Reverse String is :: " << ans << endl;

    return 0;
}
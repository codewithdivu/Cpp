#include <bits/stdc++.h>
using namespace std;

bool isValid(string s)
{
    stack<char> st;
    int size = s.size();
    bool ans = true;
    for (int i = 0; i < size; i++)
    {
        if (s[i] == '{' || s[i] == '(' || s[i] == '[')
        {
            st.push(s[i]);
        }
        else if (!st.empty() && s[i] == '}')
        {
            if (st.top() == '{')
            {
                st.pop();
            }
            else
            {
                ans = false;
                break;
            }
        }
        else if (!st.empty() && s[i] == ')')
        {
            if (st.top() == '(')
            {
                st.pop();
            }
            else
            {
                ans = false;
                break;
            }
        }
        else if (!st.empty() && s[i] == ']')
        {
            if (st.top() == '[')
            {
                st.pop();
            }
            else
            {
                ans = false;    
                break;
            }
        }
    }
    if (!st.empty())
    {
        return false;
    }
    else
    {
        return ans;
    }
}

int main(int argc, char const *argv[])
{
    // string s = "{([)]}";
    string s = "{([])}";

    if (isValid(s))
    {
        cout << "string is valid" << endl;
    }
    else
    {
        cout << "string is not valid" << endl;
    }

    return 0;
}
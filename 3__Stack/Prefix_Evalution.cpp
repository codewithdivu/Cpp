#include <bits/stdc++.h>
using namespace std;

int PrefixEvalution(string s)
{
    stack<int> st;

    for (int i = s.length() - 1; i >= 0; i--)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            st.push(s[i] - '0');
        }
        else
        {
            int operand1 = st.top();
            st.pop();

            int operand2 = st.top();
            st.pop();

            switch (s[i])
            {
            case '+':
                st.push(operand1 + operand2);
                break;
            case '-':
                st.push(operand1 - operand2);
                break;
            case '*':
                st.push(operand1 * operand2);
                break;
            case '/':
                st.push(operand1 / operand2);
                break;
            case '^':
                st.push(pow(operand1, operand2));
                break;
            }
        }
    }
    return st.top();
}

int main(int argc, char const *argv[])
{
    string str;
    cin >> str;

    cout << PrefixEvalution(str) << endl;
    return 0;
}
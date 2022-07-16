#include <bits/stdc++.h>
using namespace std;

void subsequences(string str, vector<string> &ans, string output, int index)
{

    if (index >= str.length())
    {
        ans.push_back(output);
        return;
    }

    // exclude
    subsequences(str, ans, output, index + 1);

    // include
    char element = str[index];
    output.push_back(element);
    subsequences(str, ans, output, index + 1);
}

int main(int argc, char const *argv[])
{
    string str = "abc";
    vector<string> ans;
    string output = "";
    int index = 0;

    subsequences(str, ans, output, index);


    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}
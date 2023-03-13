#include <bits/stdc++.h>
using namespace std;

void subSequences(string str, string output, int index)
{
    if (index >= str.length())
    {
        cout << output << endl;
        return;
    }

    // INCLUDE
    output.push_back(str[index]);
    subSequences(str, output, index + 1);

    // EXCLUDE
    output.pop_back();
    subSequences(str, output, index + 1);
}

int main(int argc, char const *argv[])
{
    string str = "xyz";
    string output = "";

    subSequences(str, output, 0);

    return 0;
}
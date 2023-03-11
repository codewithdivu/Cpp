#include <bits/stdc++.h>
using namespace std;

string removeOccurrences(string s, string part)
{
    int pos = s.find(part);
    while (pos != string::npos)
    {
        s.erase(pos, part.length());
        pos = s.find(part);
    }
    return s;
}

int main(int argc, char const *argv[])
{
    
    return 0;
}
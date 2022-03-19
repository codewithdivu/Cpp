#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    map<int, string> m;

    // m.insert({1, "divyesh"});
    // m.insert({2, "pravin"});

    // for (auto i : m)
    // {
    //     cout << i.first << " " << i.second << endl;
    // }

    int value;
    string key;

    for (int i = 0; i < 4; i++)
    {
        cin >> value;
        cin >> key;
        m.insert({value, key});
    }
    cout << endl;
    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }
    return 0;
}
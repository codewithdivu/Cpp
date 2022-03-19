#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    char name[n];
    cin >> name;

    int start = 0;
    int end = n - 1;

    while (start < end)
    {
        swap(name[start++], name[end--]);
    }

    cout << name << endl; 
    return 0;
}
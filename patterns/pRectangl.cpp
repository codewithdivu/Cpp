#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int row, colu;
    cin >> row >> colu;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < colu; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
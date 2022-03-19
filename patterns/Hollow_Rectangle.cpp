#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int row, colu;
    cin >> row >> colu;

    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= colu; j++)
        {
            if (i == row || i == 1 || j == 1 || j == colu)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
            cout << endl;
    }

    return 0;
}
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int row, col;
    cin >> row >> col;

    int matrix[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> matrix[i][j];
        }
    }
    cout << "Matrix is : " << endl;;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
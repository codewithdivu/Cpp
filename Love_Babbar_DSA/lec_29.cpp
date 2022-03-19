#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{

    // -----> 2-DIMENSIONAL ARRAY <-----

    // 2-DIMENSIONAL array using static memory allocation

    // int arr[3][5]; // here first square bracket denotes the no of row and second is no of columns

    // 2-DIMENSIONAL array using dynamic memory allocation

    int row, col;
    cin >> row >> col;

    // creation of 2D array
    int **arr = new int *[row];

    for (int i = 0; i < row; i++)
    {
        arr[i] = new int[col];
    }

    // taking input

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }

    // printing the 2d array

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // releasing memory

    for (int i = 0; i < row; i++)
    {
        delete[] arr[i];
    }
    delete[] arr;
    return 0;
}
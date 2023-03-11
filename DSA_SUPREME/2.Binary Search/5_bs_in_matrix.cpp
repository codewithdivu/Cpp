#include <bits/stdc++.h>
using namespace std;

bool bs_in_Matrix(vector<vector<int>> &arr, int target)
{
    int rows = arr.size();
    int cols = arr[0].size();

    int start = 0;
    int end = rows * cols - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        int rowIndex = mid / cols;
        int colIndex = mid % cols;

        if (arr[rowIndex][colIndex] == target)
        {
            return true;
        }
        else if (arr[rowIndex][colIndex] > target)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return false;
}

int main(int argc, char const *argv[])
{
    vector<vector<int>> arr = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16},
        {17, 18, 19, 20}};

    int target = 33;
    bool answer = bs_in_Matrix(arr, target);

    if (answer)
    {
        cout << "element found...." << endl;
    }
    else
    {
        cout << "not found.." << endl;
    }
    return 0;
}
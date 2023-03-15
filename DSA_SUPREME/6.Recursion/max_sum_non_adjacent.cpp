#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> arr, int sum, int &maxi, int i)
{
    if (i >= arr.size())
    {
        maxi = max(sum, maxi);
        return;
    }

    // include
    solve(arr, sum + arr[i], maxi, i + 2);
    // include
    solve(arr, sum, maxi, i + 1);
}

int main(int argc, char const *argv[])
{
    vector<int> arr = {1, 2, 4, 9};
    int sum = 0;
    int maxi = INT_MIN;
    int i = 0;
    solve(arr, sum, maxi, i);
    cout << "answer is " << maxi << endl;
    return 0;
}
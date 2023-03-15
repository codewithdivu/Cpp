#include <bits/stdc++.h>
using namespace std;

int solve(int rod, int x, int y, int z)
{
    if (rod == 0)
    {
        return 0;
    }

    if (rod < 0)
    {
        return INT_MIN;
    }
    int a = solve(rod - x, x, y, z) + 1;
    int b = solve(rod - y, x, y, z) + 1;
    int c = solve(rod - z, x, y, z) + 1;

    int ans = max(a, max(b, c));
    return ans;
}

int main(int argc, char const *argv[])
{
    int n = 7;
    int x = 5, y = 2, z = 2;
    // it will return maximum number of segments
    int ans = solve(n, x, y, z);

    // answer will be valid or invalid

    if (ans < 0)
    {
        ans = 0;
    }
    cout << "answer is " << ans << endl;
    return 0;
}
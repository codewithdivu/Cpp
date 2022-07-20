#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> ans = {11, 2, 54, 87, 126, 231, 654, 8, 654, 8, 65, 32, 8};

    int len = ans.size();

    int counter = 1;

    while (counter < len)
    {

        for (int i = 0; i < len - counter; i++)
        {
            if (ans[i] > ans[i + 1])
            {
                swap(ans[i], ans[i + 1]);
            }
        }
    }

    for (int j = 0; j < ans.size(); j++)
    {
        cout << ans[j] << " ";
    }

    return 0;
}
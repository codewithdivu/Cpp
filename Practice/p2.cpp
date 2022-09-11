#include <bits/stdc++.h>
using namespace std;

void subSequences(int list[], int index, int size, vector<int> ans)
{
    if (index >= size)
    {
        if (ans.size() == 0)
        {
            cout << "{}";
        }
        for (auto it : ans)
        {
            cout << it << " ";
        }
        cout << endl;
        return;
    }
    ans.push_back(list[index]);
    subSequences(list, index + 1, size, ans);
    ans.pop_back();
    subSequences(list, index + 1, size, ans);
}

int main(int argc, char const *argv[])
{
    int list[] = {1, 2, 3, 4};
    vector<int> ans;
    subSequences(list, 0, 4, ans);
    return 0;
}
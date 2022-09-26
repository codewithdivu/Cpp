

// ACTIVITY SELECTION PROBLEM

#include <bits/stdc++.h>
using namespace std;

int maxMeetings(int start[], int end[], int n)
{
    vector<pair<int, int>> ans;

    for (int i = 0; i < n; i++)
    {
        pair<int, int> p = make_pair(end[i], start[i]);
        ans.push_back(p);
    }

    sort(ans.begin(), ans.end());
    int count = 1;
    int meetingEnd = ans[0].first;

    for (int i = 1; i < n; i++)
    {
        if (ans[i].second > meetingEnd)
        {
            count++;
            meetingEnd = ans[i].first;
        }
    }

    return count;
}

int main(int argc, char const *argv[])
{
    int start[] = {1, 3, 0, 5, 8, 5};
    int end[] = {2, 4, 6, 7, 9, 9};

    int ans = maxMeetings(start, end, 6);

    cout << "answer is " << ans << endl;
    return 0;
}
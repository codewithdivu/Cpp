#include <bits/stdc++.h>
using namespace std;

int findMinDifference(vector<string> &timePoints)
{
    vector<int> minutes;

    for (int i = 0; i < timePoints.size(); i++)
    {
        string curr = timePoints[i];

        int hours = stoi(curr.substr(0, 2));
        int minute = stoi(curr.substr(3, 2));

        int totalMinutes = hours * 60 + minute;

        minutes.push_back(totalMinutes);
    }

    sort(minutes.begin(), minutes.end());

    int ans = INT_MAX;

    for (int i = 0; i < minutes.size() - 1; i++)
    {
        int diff = minutes[i + 1] - minutes[i];
        ans = min(ans, diff);
    }

    /// main condition
    // we have to compute last difference means diff of first and last

    int lastDiff = (minutes[0] + 1440) - minutes[minutes.size() - 1];

    ans = min(ans, lastDiff);

    return ans;
}

int main(int argc, char const *argv[])
{
    vector<string> timePoints = {};

    int ans = findMinDifference(timePoints);

    cout << "answer is : " << ans << endl;

    return 0;
}
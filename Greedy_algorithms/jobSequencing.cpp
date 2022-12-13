#include <bits/stdc++.h>
using namespace std;

static bool cmp(pair<int, pair<int, int>> a, pair<int, pair<int, int>> b)
{
    return a.first > b.first;
}

int jobScheduling(vector<pair<int, pair<int, int>>> jobsequencing, vector<int> schedule)
{
    sort(jobsequencing.begin(), jobsequencing.end(), &cmp);

    int maxProfit = 0;

    for (int i = 0; i < jobsequencing.size(); i++)
    {
        int currentProfit = jobsequencing[i].first;
        int currentJob = jobsequencing[i].second.first;
        int currentDeadline = jobsequencing[i].second.second;

        for (int j = currentDeadline; j > 0; j--)
        {
            if (schedule[j] == -1)
            {
                maxProfit += currentProfit;
                schedule[j] = currentJob;
                break;
            }
        }
    }
    return maxProfit;
}

int main(int argc, char const *argv[])
{
    int profit[] = {3, 5, 18, 20, 6, 1, 38};
    int job[] = {1, 2, 3, 4, 5, 6, 7};
    int deadline[] = {1, 3, 3, 4, 1, 2, 1};

    vector<pair<int, pair<int, int>>> ans;

    for (int i = 0; i < 7; i++)
    {
        pair<int, pair<int, int>> p = make_pair(profit[i], make_pair(job[i], deadline[i]));
        ans.push_back(p);
    }

    int maxDeadline = *max_element(deadline, deadline + 7);
    vector<int> schedule(maxDeadline + 1, -1);

    cout << "maximum profilt is " << jobScheduling(ans, schedule) << endl;
    return 0;
}
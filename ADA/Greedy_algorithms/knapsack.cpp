#include <bits/stdc++.h>
using namespace std;

bool cmp(const pair<int, int> &a, const pair<int, int> &b)
{
    return (static_cast<double>(a.first) / a.second) > (static_cast<double>(b.first) / b.second);
}

double fractionalKnapsack(vector<pair<int, int>> knapsack, int totalWeight)
{
    sort(knapsack.begin(), knapsack.end(), &cmp);

    double finalAnswer = 0.0;

    for (int i = 0; i < knapsack.size(); i++)
    {
        if (knapsack[i].second <= totalWeight)
        {
            totalWeight -= knapsack[i].second;
            finalAnswer += knapsack[i].first;
        }
        else
        {
            finalAnswer += knapsack[i].first * ((double)totalWeight / (double)knapsack[i].second);
            break;
        }
    }
    return finalAnswer;
}

int main(int argc, char const *argv[])
{
    int totalWeight = 50;
    int value[] = {60, 100, 120};
    int weight[] = {10, 20, 30};
    vector<pair<int, int>> knapsack;

    for (int i = 0; i < 3; i++)
    {
        pair<int, int> p = make_pair(value[i], weight[i]);
        knapsack.push_back(p);
    }

    cout << "KNAPSACK " << fractionalKnapsack(knapsack, totalWeight);

    return 0;
}
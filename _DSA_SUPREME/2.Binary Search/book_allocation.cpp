#include <bits/stdc++.h>
using namespace std;

bool isPossibleSolution(vector<int> &arr, int students, int solution)
{
    int count = 1;
    int pageSum = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > solution)
        {
            return false;
        }
        if (pageSum + arr[i] > solution)
        {
            count++;
            pageSum = arr[i];
            if (count > students)
            {
                return false;
            }
        }
        else
        {
            pageSum += arr[i];
        }
    }
    return true;
}

int book_allocation(vector<int> &arr, int students)
{
    if (students > arr.size())
        return -1;

    int start = 0;
    int end = accumulate(arr.begin(), arr.end(), 0);

    int answer = -1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (isPossibleSolution(arr, students, mid))
        {
            answer = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return answer;
}

int main(int argc, char const *argv[])
{
    vector<int> arr = {10, 20, 30, 40}; // correct answer is 60
    // vector<int> arr = {12, 34, 67, 90}; // correct answer is 113
    int m = 2;

    int ans = book_allocation(arr, m);

    cout << "answer is : " << ans << endl;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

void counting(int num)
{
    if (num == 0)
    {
        return;
    }
    cout << num << " ";
    counting(num - 1);
}
void reverseCounting(int num)
{
    if (num == 0)
    {
        return;
    }
    reverseCounting(num - 1);
    cout << num << " ";
}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    counting(n);
    reverseCounting(n);
    return 0;
}
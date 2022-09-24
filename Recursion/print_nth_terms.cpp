#include <bits/stdc++.h>
using namespace std;

// THIS IS THE HEAD RECURSION

void print_nth_term_Head_recursion(int n)
{
    if (n == 0)
    {
        return;
    }
    cout << n << " ";
    print_nth_term_Head_recursion(n - 1);
}

// THIS IS THE TAIL RECURSION

void print_nth_term_Tail_recursion(int n)
{
    if (n == 0)
    {
        return;
    }
    print_nth_term_Tail_recursion(n - 1);
    cout << n << " ";
}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    print_nth_term_Head_recursion(n);
    cout << endl;
    print_nth_term_Tail_recursion(n);
    return 0;
}
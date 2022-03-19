// #include <bits/stdc++.h>
#include <iostream>
#include <deque>
using namespace std;

int main(int argc, char const *argv[])
{
    deque<int> d;

    d.push_back(1);
    d.push_front(3);
    d.push_back(5);
    d.push_front(99);

    for (int i : d)
    {
        cout << i << " ";
    }

    
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

bool checkPythagoral(int x, int y, int z)
{
    int a = max(x, max(y, z));
    int b, c;
    if (a == x)
    {
        b = y;
        c = z;
    }
    else if (a == y)
    {
        b = x;
        c = z;
    }
    else
    {
        b = x;
        c = y;
    }

    if (a * a == b * b + c * c)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main(int argc, char const *argv[])
{
    int x, y, z;
    cin >> x >> y >> z;

    if (checkPythagoral(x,y,z))
    {
        cout << "Pythagoral Tripet" << endl;
    }
    else
    {
        cout << "Non Pythagoral" << endl;
    }

    return 0;
}
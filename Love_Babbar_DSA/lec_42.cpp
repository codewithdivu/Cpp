#include <bits/stdc++.h>
using namespace std;

class Hero
{
    int Health;

public:
    int level;

    Hero()
    {
        cout << "default constructor is calling" << endl;
    }
    Hero(int a)
    {
        cout << "level is " << level << " with constructor" << endl;
    }
    Hero(int f, int b)
    {
        cout << "level is " << level << " Health is " << Health << " with Constructor" << endl;
    }
};

int main(int argc, char const *argv[])
{
    Hero divu;
    // Hero Divu(5);
    Hero Divu(5,6);
    return 0;
}
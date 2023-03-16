#include <bits/stdc++.h>
using namespace std;

class Human
{
    // properties
    int age;
    int weight;

    // behaviour
    void sleep()
    {
        cout << "Sleeping......" << endl;
    }
    void eat()
    {
        cout << "Eating......." << endl;
    }
};

int main(int argc, char const *argv[])
{
    Human divyesh;
    divyesh.age = 19;
    divyesh.weight = 85;
    divyesh.sleep();
    divyesh.eat();
    return 0;
}
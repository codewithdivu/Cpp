#include <bits/stdc++.h>
using namespace std;

class Triangle
{
    int side1, side2, side3;

public:
    Triangle(int a, int b, int c) : side1(a), side2(b), side3(c) {}

    void Triangle_area_perimeter()
    {
        cout << "area of triangle is: " << (side2 * side3) / 2 << endl;
        cout << "Perimeter of triangle is: " << side1 + side2 + side3 << endl;
    }
};

int main(int argc, char const *argv[])
{
    Triangle t1(3, 4, 5);

    t1.Triangle_area_perimeter();
    return 0;
}
// Create a class named 'Student' with a string variable 'name' and an integer variable 'roll_no'. Assign the value of roll_no as '2' and that of name as "John" by creating an object of the class Student.


#include <bits/stdc++.h>
using namespace std;

class Student
{
    int roll;
    string name;

public:
    Student(int a, string str) : roll(a), name(str) {}
    void Printdata()
    {
        cout << "Student name is " << name << endl
        <<" Student roll number is " << roll << endl;
    }
};

int main(int argc, char const *argv[])
{
    Student Di(28, "Divyeshkumar");
    Di.Printdata();
    return 0;
}


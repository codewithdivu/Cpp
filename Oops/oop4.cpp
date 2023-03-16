#include <bits/stdc++.h>
using namespace std;

class employee
{
    string name;
    string Join_year;
    string company_name;

public:
    void getdata()
    {
        cout << "Enter your name " << endl;
        cin >> name;
        cout << "Enter the joining date of company" << endl;
        cin >> Join_year;
        cout << "Enter the comapany name" << endl;
        cin >> company_name;
    }

    void printdata()
    {
        cout << endl;
        cout << "Your name is: " << name << endl;
        cout << "Joining data is: " << Join_year << endl;
        cout << "Work in " << company_name << endl;
        cout << endl;
    }
};

int main(int argc, char const *argv[])
{
    employee e1;
    e1.getdata();
    e1.printdata();
    return 0;
}
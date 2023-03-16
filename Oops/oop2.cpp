// Assign and print the roll number, phone number and address of two students having names "Sam" and "John" respectively by creating two objects of the class 'Student'.

#include <bits/stdc++.h>
using namespace std;

class person{
    long long int roll;
    long long int phone_number;
    string address;
    
    public:
        void getdata()
        {
            cout<<"please enter your roll number "<<endl;
            cin>>roll;
            cout<<"Please enter your mobile number "<<endl;
            cin>>phone_number;
            cout<<"we need your address so please enter your address "<<endl;
            cin>>address;
        }

        void printdata()
        {
            cout<<"Your roll number is "<<roll<<endl;
            cout<<"Your mobile number is "<<phone_number<<endl;
            cout<<"-----Address----- :: "<<address<<endl;
        }
};

int main(int argc, char const *argv[])
{
    person divyesh,milan;
    divyesh.getdata();
    cout<<endl;
    divyesh.printdata();
    cout<<endl;
    milan.getdata();
    cout<<endl;
    milan.printdata();
    return 0;
}
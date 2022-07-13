#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    while (n != 0)
    {

        if (n >= 100)
        {
            cout << "notes of 100 rupees is " << n / 100 << endl;
            n = n % 100;
        }
        else if(n>=50 && n<100){
            cout << "notes of 50 rupees is " << n / 50 << endl;
            n = n % 50;
        }
        else if(n>=20 && n<50){
            cout << "notes of 20 rupees is " << n / 20 << endl;
            n = n % 20;
        }
        else if(n>=10 && n<20){
            cout << "notes of 10 rupees is " << n / 10 << endl;
            n = n % 10;
        }
        else if(n>=5 && n<10){
            cout << "notes of 5 rupees is " << n / 5 << endl;
            n = n % 5;
        }
        else if(n>=1 && n<5){
            cout << "notes of 1 rupees is " << n / 1 << endl;
            n = n % 1;
        }
    }

    return 0;
}
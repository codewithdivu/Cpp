#include <bits/stdc++.h>
using namespace std;

void sayDigits(int n,string str[]){
    if(n==0){
        return;
    }
    int digit = n%10;

    sayDigits(n/10,str);
    cout<<str[digit]<<" ";
}

int main(int argc, char const *argv[])
{
    string str[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    int n;
    cin>>n;

    sayDigits(n,str);
    return 0;
}
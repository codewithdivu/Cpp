#include <bits/stdc++.h>
using namespace std;

void dummy(int &n){
    n=n+1;

    cout<<"number is "<<n<<endl;
}


int main(int argc, char const *argv[])
{
    int n;
    cin>>n;


    dummy(n);

    cout<<"no is "<<n<<endl;

    return 0;
}
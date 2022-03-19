#include<iostream>
using namespace std;

int fact(int num)
{
    int factorial=1;
    for (int i = 2; i <=num; i++)
    {
        factorial*=i;
    }
    return factorial;
}

int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    int ans = fact(n);
    cout<<ans;
    return 0;
}
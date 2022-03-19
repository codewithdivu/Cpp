#include<iostream>
using namespace std;

// int sum(int  n)
// {
//     int sum=0;
//     for (int  i = 1; i <=n; i++)
//     {
//         sum+=i;
//     }
//     return sum;
// }

int sum(int n)
{
    int sum=0;
    return (n*(n+1))/2;
}

int main(int argc, char const *argv[])
{
    int n;
    cin>>n;

    int ans=sum(n);
    cout<<ans;
    return 0;
}
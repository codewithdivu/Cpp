#include <bits/stdc++.h>
using namespace std;

void fibo(int n)
{
    if (n<=0)
    {
        return;
    }
    
    static int fi=0, sec = 1;
    static int next;
    next = fi+sec;
    cout<<next<<" ";
    fi = sec;
    sec = next;
    fibo(n-1);
}

int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    cout<<0<<" "<<1<<" ";
    fibo(n-2);
    return 0;
}
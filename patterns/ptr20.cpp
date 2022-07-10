#include <bits/stdc++.h>
using namespace std;

/*
* * * * 
* * * 
* * 
* 
*/

int main(int argc, char const *argv[])
{
    int n;
    cin>>n;

    int i=1;
    while(i<=n){
        int j = n-i+1;
        while(j){
            cout<<"*"<<" ";
            j--;
        }
        cout<<endl;
        i++;
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

/*
A
B C
D E F
G H I J
*/

int main(int argc, char const *argv[])
{
    int n;
    cin>>n;

    int i=1;

    int counter = 0;
    while(i<=n){

        int j=1;
        while(j<=i){
            char ch = 'A'+counter;
            cout<<ch<<" ";
            j++;
            counter++;
        }
    cout<<endl;
    i++;
    }
    return 0;
}
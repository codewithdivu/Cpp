#include <bits/stdc++.h>
using namespace std;

/*
A
B C
C D E
D E F G
*/


int main(int argc, char const *argv[])
{
    int n;
    cin>>n;

    int i=1;

    while(i<=n){

        int j=1;
        while(j<=i){
            char ch = 'A'+i-1+j-1;
            cout<<ch<<" ";
            j++;
        }
    cout<<endl;
    i++;
    }
    return 0;
}
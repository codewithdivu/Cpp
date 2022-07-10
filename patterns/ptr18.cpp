#include <bits/stdc++.h>
using namespace std;

/*
D       
C D     
B C D   
A B C D
*/

int main(int argc, char const *argv[])
{
    int n;
    cin>>n;

    int i=1;

    while(i<=n){

        int j=1;
        while(j<=i){
            char ch = 'A'+n-i+j-1;
            cout<<ch<<" ";
            j++;
        }
    cout<<endl;
    i++;
    }
    return 0;
}
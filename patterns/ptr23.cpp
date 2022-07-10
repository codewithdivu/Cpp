#include <bits/stdc++.h>
using namespace std;

/*
1234
 234
  34
   4
*/

int main(int argc, char const *argv[])
{
    int n;
    cin>>n;

    int i=1;
    while(i<=n){
        int space = i-1;
        while(space){
            cout<<" ";
            space--;
        }
        int j=n-i+1;
        while(j){
            cout<<n-j+1;
            j--;
        }
        cout<<endl;
        i++;
    }

    return 0;
}
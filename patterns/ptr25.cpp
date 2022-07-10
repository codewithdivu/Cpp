#include <bits/stdc++.h>
using namespace std;

/*
   1
  23
 456
78910
*/

int main(int argc, char const *argv[])
{
    int n;
    cin>>n;

    int i=1;
    int counter = 1;
    while(i<=n){
        int space = n-i;
        while(space){
            cout<<" ";
            space--;
        }
        int j=1;
        while(j<=i){
            cout<<counter;
            counter++;
            j++;
        }
        cout<<endl;
        i++;
    }

    return 0;
}
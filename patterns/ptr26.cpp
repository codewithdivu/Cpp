#include <bits/stdc++.h>
using namespace std;

/*
   1   
  121  
 12321 
1234321
*/

int main(int argc, char const *argv[])
{
    int n;
    cin>>n;

    int i=1;
    while(i<=n){

        // printing the spaces
        int space = n-i;
        while(space){
            cout<<" ";
            space--;
        }


        // printing the middle part
        int j=1;
        while(j<=i){
            cout<<j;
            j++;
        }

        // printing the third part

        int start = i-1;
        while(start){
            cout<<start;
            start--;
        }

        cout<<endl;
        i++;

    }
    return 0;
}
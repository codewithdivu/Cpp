#include <bits/stdc++.h>
using namespace std;

/*
1234554321
1234**4321
123****321
12******21
1********1
*/

int main(int argc, char const *argv[])
{
    int n;
    cin>>n;

    int i=1;
    while(i<=n){

        // first part

        int j=1;
        while(j<=n-i+1){
            cout<<j;
            j++;
        }

        // second part

        int k = i-1;
        while(k){
            cout<<"*";
            k--;
        }

        // third part

        int m = i-1;
        while(m){
            cout<<"*";
            m--;
        }


        // fourth part

       int o=n-i+1;
       int p = n-i+1;
        while(o){
            cout<<p;
            p--;
            o--;
        }

        cout<<endl;
        i++;
    }
    return 0;
}
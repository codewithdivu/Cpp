#include <bits/stdc++.h>
using namespace std;

// first solution
// int BinaryToDecimal(int n)
// {
//     int ans = 0;
//     int x = 1;
//     while (n!=0)
//     {
//         int y = n % 10;
//         ans += x * y;
//         x *= 2;
//         n = n / 10;
//     }
//     return ans;
// }

// second solution
int BinaryToDecimal(int n)
{
    int i = 0;
    int ans = 0;
    while(n!=0){
        if(n%10){
            ans = ans + pow(2,i);
        }
        n=n/10;
        i++;
    }
    return ans;
}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    cout << BinaryToDecimal(n) << endl;
    return 0;
}
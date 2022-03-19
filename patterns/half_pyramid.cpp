
// LEFT SIDE HALF PYRAMID

/*
*
**
***
****
*/
// #include <bits/stdc++.h>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int n;
//     cin >> n;

//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }

//     return 0;
// }

// LEFT SIDE INVERTED HALF PYRAMID
/*
****
*** 
**  
*   
*/
// #include <bits/stdc++.h>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     int n;
//     cin >> n;

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n - i; j++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }

//     return 0;
// }

// RIGHT SIDE HALF PYRAMID

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j <= n - i)
            {
                cout << " ";
            }
            else
            {
                cout << "*";
            }
        }

        cout << endl;
    }

    return 0;
}

// RIGHT SIDE INVERTED HALF PYRAMID

// #include <bits/stdc++.h>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     int n;
//     cin >> n;

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             if (j  n - i)
//             {
//                 cout << "*";
//             }
//             else
//             {
//                 cout << " ";
//             }
//         }
//         cout << endl;
//     }

//     return 0;
// }
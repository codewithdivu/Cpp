// REMEMBER THIS THING IN INSERTION SORT
// -> INSERT AN ELEMENT FROM UNSORTED ARRAY TO ITS CORRECT POSITION IN SORTED ARRAY

// Space Complexity ---->  0(1)
// Time Complexity ---->  0(n^2)

// Best Case ----> 0(n)
// Worst Case ----> 0(n^2)
// Average Case ----> 0(n^2)

#include <bits/stdc++.h>
using namespace std;


// by shradhdha
void insertionSort(int n, int arr[])
{
    for (int i = 1; i < n; i++)
    {
        int curr = arr[i];
        int j = i - 1;
        while (arr[j] > curr && j>=0)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = curr;
    }
}

// by babbar
// void insertionSort(int n, int arr[])
// {
//     for (int i = 1; i < n; i++)
//     {

//         int temp = arr[i];
//         int j;
//         for (j = i - 1; j >= 0; j--)
//         {
//             if (arr[j] > temp)
//             {
//                 arr[j + 1] = arr[j];
//             }
//             else
//             {
//                 break;
//             }
//         }
//         arr[j + 1] = temp;
//     }
// }

int main(int argc, char const *argv[])
{
    int arr[] = {11, 65, 32, 5, 33, 78, 34, 99, 64, 23};
    int n = sizeof(arr) / sizeof(arr[0]);

    insertionSort(n, arr);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{

    // ARRAY AS POINTER

    // int arr[10] = {1, 3, 5, 6, 3};

    // int *ptr = arr;

    // ----------------> All THE WAYS TO PRINT THE ADDRESS OF ELEMENTS <------------------

    // THIS WILL PRINT THE ADDRESS OF FIRST ELEMENT
    // cout << "address of first element in array " << arr << endl;
    // cout << "address of first element in array " << &arr << endl;
    // cout << "address of first element in array " << &arr[0] << endl;

    // PRINTING THE ADDRESS OF EACH BLOCKS
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << "address of " << i << " element is " << arr + i << endl;
    // }

    // PRINTING THE ADDRESS OF EACH BLOCKS
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << "address of " << i << " element is " << &arr[i] << endl;
    // }


    // ----------------------------------USING POINTER PTR-------------------------------------------------------


    // PRINTING THE ADDRESS OF EACH BLOCKS
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << "address of " << i << " element is " << ptr + i << endl;
    // }

    // cout<<"address of first element "<<ptr<<endl;
    // cout<<"address of first element "<<ptr+1<<endl;
    // cout<<"address of first element "<<ptr+2<<endl;
    // cout<<"address of first element "<<&ptr<<endl;









// ---------------------------------------------------------------------------------------------------------------------------------------------------------
// ---------------------------------------------------------------------------------------------------------------------------------------------------------

    // ----------------> All THE WAYS TO PRINT THE VALUES OF ELEMENTS <------------------

    // PRINTING THE ELEMENT OF ARRAY USING TWO DIFFERENT WAYS

    // for (int i = 0; i < 5; i++)
    // {
    //     cout << "element at index " << i << " is " << arr[i] << endl;
    // }

    //   -----> arr[i] === *(arr+i) <------
    //   -----> i[arr] === *(i+arr) <------

    // for (int i = 0; i < 5; i++)
    // {
    //     cout << "element at index " << i << " is " << i[arr] << endl;
    // }

    // PRINTING THE ELEMENTS OF ARRAY USING POINTER
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << *(arr + i) << " ";
    // }

    // THIS STATEMENT WILL PRINT THE FIRST ELEMENT OF ARRAY
    // cout << *arr << endl;




    // ----------------------------------USING POINTER PTR-------------------------------------------------------
    

    // PRINTING THE ELEMENTS OF ARRAY USING POINTER
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << *(ptr + i) << " ";
    // }
    
    // cout<<"first element of array "<<*ptr<<endl;
    // cout<<"second element of array "<<*(ptr+1)<<endl;




// ---------------------------------------------------------------------------------------------------------------------------------------------------------
// ---------------------------------------------------------------------------------------------------------------------------------------------------------
                                                            // CHARACTER ARRAY 



    

    return 0;
}
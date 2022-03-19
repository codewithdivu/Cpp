#include<iostream>
#include<climits>
using namespace std;

int main(int argc, char const *argv[])
{
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        cin>>arr[i];
    }
    // for (int i = 0; i < 10; i++)
    // {
    //     cout<<arr[i]<<endl;
    // }
    int max_n=INT_MIN;
    int min_n=INT_MAX;
    for (int i = 0; i < 10; i++)
    {
        max_n=max(max_n,arr[i]);
        min_n=min(min_n,arr[i]);
    }
    cout<<max_n<<" "<<min_n;
    return 0;
}
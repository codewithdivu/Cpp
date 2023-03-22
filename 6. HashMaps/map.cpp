#include <iostream>
#include <map>
using namespace std;

int main(int argc, char const *argv[])
{
    map<int, int> mp;
    return 0;
}

// map
/*
---------------------------------------------
|   Operation	        | Time Complexity   |
|   Insert	            |   O(log(n))       |
|   Access by Key	    |   O(log(n))       |
|   Remove by Key	    |   O(log(n))       |
|   Find/Remove Value   |	O(log(n))       |
---------------------------------------------
*/

/*
                           ----> Value
                           |
                           |
                map<int, string> umap;
                    |            |
                    |            |
                    --> Key      ----> Map name
*/
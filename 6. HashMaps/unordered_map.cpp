#include <iostream>
#include <unordered_map>
using namespace std;

int main(int argc, char const *argv[])
{
    unordered_map<int, int> um;
    return 0;
}

// unordered_map
/*
---------------------------------------------
|   Operation	        | Time Complexity   |
|   Insert	            |   O(1)            |
|   Access by Key	    |   O(1)            |
|   Remove by Key	    |   O(1)            |
|   Find/Remove Value   |	--              |
---------------------------------------------
*/

/*
                           ---> Value
                          |
                          |
    unordered_map<int, string> umap;
                   |            |
                   |            |
                   --> Key      ----> Map name
*/
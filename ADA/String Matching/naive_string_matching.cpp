#include <bits/stdc++.h>
using namespace std;

// a function that prints occurrences of pattern[] in text[]
void searchPattern(string pattern, string text, int m, int n)
{
    // Outer loop will help to traverse the entire input text string
    for (int i = 0; i <= n - m; i++)
    {
        int j;
        // Traversing the entire pattern string and checking if the current character matches or not.
        for (j = 0; j < m; j++)
            if (text[i + j] != pattern[j])
                break;
        /*
        If we have traversed the entire searching space and did not break, it means we have found our pattern in the string starting from the index-i
        */
        if (j == m)
        {
            cout << "The pattern was found at the index: " << i << endl;
            return;
        }
    }
    cout << "No match found!" << endl;
}

/* The main function */
int main()
{
    string text = "Scaler Topics";
    string pattern = "Topics";
    searchPattern(pattern, text, pattern.size(), text.size());

    return 0;
}
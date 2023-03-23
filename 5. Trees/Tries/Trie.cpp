#include <bits/stdc++.h>
using namespace std;

class TrieNode
{
public:
    char data;
    TrieNode *children[26];
    bool isTerminal;

    TrieNode(char ch)
    {
        data = ch;
        for (int i = 0; i < 26; i++)
        {
            children[i] = NULL;
        }
        isTerminal = false;
    }
};

class Trie
{
public:
    TrieNode *root;

    Trie()
    {
        root = new TrieNode('\0');
    }

    // -------------------------INSERTION--------------------------

    // here we made new insertUtil function because of we using recursino that's why a separate function is easy to understand
    void insertUtil(TrieNode *root, string word)
    {
        // base case
        if (word.length() == 0)
        {
            root->isTerminal = true; // making last node to terminal node
            return;
        }
        // assumption -> ord will be in capital(CAPS)
        int index = word[0] - 'A';

        TrieNode *child;

        if (root->children[index] != NULL)
        {
            child = root->children[index]; // present
        }
        else
        {
            child = new TrieNode(word[0]); // absent
            root->children[index] = child;
        }

        // recursion
        insertUtil(child, word.substr(1));
    }

    void insertWord(string word)
    {
        insertUtil(root, word);
    }

    // -------------------------SEARCHING--------------------------

    bool searchUtil(TrieNode *root, string word)
    {
        // base case
        if (word.length() == 0)
        {
            return root->isTerminal;
        }

        int index = word[0] - 'A';
        TrieNode *child;

        // present
        if (root->children[index] != NULL)
        {
            child = root->children[index];
        }
        // absent
        else
        {
            return false;
        }

        // recursion;
        return searchUtil(child, word.substr(1));
    }

    bool searchWord(string word)
    {
        return searchUtil(root, word);
    }
};

int main(int argc, char const *argv[])
{
    Trie *t = new Trie();
    t->insertWord("ARM");
    t->insertWord("DO");
    t->insertWord("TIME");
    t->insertWord("DUCK");

    cout << "present or Not " << t->searchWord("TIM") << endl;

    return 0;
}

/*

-----------TIME COMPLEXITY-----------

Insertion ---> TC = 0(l)  where l is length of word
Deletion ---> TC = 0(l)  where l is length of word
Searching ---> TC = 0(l)  where l is length of word

TRIE used space optimization rather than hashmaps

*/
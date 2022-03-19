#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *left, *right;

    node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

node *InsertBST(node *root, int val)
{
    if (root == NULL)
    {
        return new node(val);
    }
    if (val < root->data)
    {
        root->left = InsertBST(root->left, val);
    }
    else
    {
        root->right = InsertBST(root->right, val);
    }
    return root;
}

void Inorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    Inorder(root->left);
    cout << root->data << " ";
    Inorder(root->right);
}

node *searchInBST(node *root, int key)
{
    if (root == NULL)
    {
        return NULL;
    }

    if (root->data == key)
    {
        return root;
    }
    else if (root->data > key)
    {
        return searchInBST(root->left, key);
    }

    return searchInBST(root->right, key);
}

int main(int argc, char const *argv[])
{
    node *root = NULL;
    root = InsertBST(root, 5);
    InsertBST(root, 1);
    InsertBST(root, 3);
    InsertBST(root, 4);
    InsertBST(root, 2);
    InsertBST(root, 7);

    Inorder(root);
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

// CREATING A BINARY TREE
struct node
{
    int data;
    struct node *left;
    struct node *right;

    node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

// PREORDER TRAVERSAL

void preOrder(struct node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}

// POSTORDER TRAVERSAL

void postOrder(struct node *root)
{
    if (root == NULL)
    {
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";
}

// INORDER TRAVERSAL

void inOrder(struct node *root)
{
    if (root == NULL)
    {
        return;
    }
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

int main(int argc, char const *argv[])
{
    struct node *root = new node(1);

    root->left = new node(2);
    root->right = new node(3);

    root->left->left = new node(4);
    root->left->right = new node(5);

    root->right->left = new node(6);
    root->right->right = new node(7);

    cout << "preOrder Traversal" << endl;
    preOrder(root);
    cout << endl;
    cout << "postOrder Traversal" << endl;
    postOrder(root);
    cout << endl;
    cout << "inOrder Traversal" << endl;
    inOrder(root);
    cout << endl;

    return 0;
}
/*
      1
    /   \
   2     3
  / \   / \
 4   5  6  7
*/
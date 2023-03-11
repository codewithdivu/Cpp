#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        this->data = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *insertIntoBST(Node *&root, int data)
{
    if (root == NULL)
    {
        root = new Node(data);
        return root;
    }

    if (data > root->data)
    {
        root->right = insertIntoBST(root->left, data);
    }
    else if (data < root->data)
    {
        root->left = insertIntoBST(root->left, data);
    }
    return root;
}

void levelOrderTraversal(Node *root)
{
    queue<Node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();

        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";

            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}

int main(int argc, char const *argv[])
{
    Node *root = NULL;

    insertIntoBST(root, 10);
    insertIntoBST(root, 8);
    insertIntoBST(root, 21);
    insertIntoBST(root, 7);
    insertIntoBST(root, 27);
    insertIntoBST(root, 5);
    insertIntoBST(root, 4);
    insertIntoBST(root, 3);

    levelOrderTraversal(root);

    return 0;
}
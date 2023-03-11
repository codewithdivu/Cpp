#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    node(int val)
    {
        this->data = val;
        this->left = NULL;
        this->right = NULL;
    }
};

// recursive way for building tree

node *buildTree(node *root)
{
    cout << "enter the data " << endl;
    int data;
    cin >> data;

    root = new node(data);

    if (data == -1)
    {
        return NULL;
    }

    cout << "enter the data for inserting in left of " << data << endl;
    root->left = buildTree(root->left);
    cout << "enter the data for inserting in right of " << data << endl;
    root->right = buildTree(root->right);

    return root;
}

//  level order travesal

void levelOrderTraversal(node *root)
{
    queue<node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        node *temp = q.front();
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

void inOrder(node *root)
{
    if (root == NULL)
    {
        return;
    }

    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}
void preOrder(node *root)
{
    if (root == NULL)
    {
        return;
    }

    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}
void postOrder(node *root)
{
    if (root == NULL)
    {
        return;
    }

    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";
}

void buildTreeFromLevelOrderTraversal(node *root)
{
    queue<node *> q;
    cout << "enter data for root" << endl;
    int rootData;
    cin >> rootData;
    root = new node(rootData);
    q.push(root);

    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();

        cout << "enter data for left node " << temp->data << endl;
        int leftData;
        cin >> leftData;

        if (leftData != -1)
        {
            temp->left = new node(leftData);
            q.push(temp->left);
        }
        cout << "enter data for right node " << temp->data << endl;
        int rightData;
        cin >> rightData;

        if (rightData != -1)
        {
            temp->right = new node(rightData);
            q.push(temp->right);
        }
    }
}

int main(int argc, char const *argv[])
{
    node *root = NULL;

    /*
        root = buildTree(root);

        // LEVELORDER TRAVERSAL
        cout << "LEVEL ORDER TRAVERSAL IS " << endl;
        levelOrderTraversal(root);

        // PREORDER TRAVERSAL
        preOrder(root);
        cout << endl;

        // INORDER TRAVERSAL
        inOrder(root);
        cout << endl;

        // POSTORDER TRAVERSAL
        postOrder(root);
        cout << endl;
    */

    buildTreeFromLevelOrderTraversal(root);
    levelOrderTraversal(root);
    return 0;
}
// 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
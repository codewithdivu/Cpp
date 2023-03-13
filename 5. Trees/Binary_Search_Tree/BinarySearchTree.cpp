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

// -----------------------MAKING BST OR INSERTING IN BST--------------------------------
Node *insertIntoBST(Node *&root, int val)
{
    if (root == NULL)
    {
        root = new Node(val);
        return root;
    }

    if (root->data > val)
    {
        root->left = insertIntoBST(root->left, val);
    }
    else if (root->data < val)
    {
        root->right = insertIntoBST(root->right, val);
    }
    return root;
}

void takeInput(Node *&root)
{
    int data;
    cin >> data;

    while (data != -1)
    {
        insertIntoBST(root, data);
        cin >> data;
    }
}

// -----------------------DELETION IN BST--------------------------------

Node *deleteFromBST(Node *root, int val)
{
    if (root == NULL)
    {
        return root;
    }

    if (root->data == val)
    {
        // here deletion logic

        // 0 child
        if (root->left == NULL && root->right == NULL)
        {
            return NULL;
        }
        // 1 child
        // left child
        if (root->left != NULL && root->right == NULL)
        {
            Node *temp = root->left;
            delete root;
            return temp;
        }
        // right child
        if (root->left == NULL && root->right != NULL)
        {
            Node *temp = root->right;
            delete root;
            return temp;
        }

        // 2 child

        if (root->left != NULL && root->right != NULL)
        {
            int mini = findMini(root->right)->data;
            root->data = mini;
            root->right = deleteFromBST(root->right, mini);
            return root;

            /*
            int maxi = findMaxi(root->left)->data;
            root->data = maxi;
            root->left = deleteFromBST(root->left, maxi);
            return root;
            */
        }
    }

    else if (root->data > val)
    {
        root->left = deleteFromBST(root->left, val);
        return root;
    }
    else if (root->data < val)
    {
        root->right = deleteFromBST(root->right, val);
        return root;
    }
}

// -----------------------SEARCHING IN BST--------------------------------------
// RECURSIVE WAY
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

// ITERATIVE WAY
bool *searchInBSTIterative(node *root, int key)
{
    node *temp = root;

    while (temp != NULL)
    {
        if (temp->data == key)
        {
            return true;
        }

        if (temp->data > key)
        {
            temp = temp->left;
        }
        else
        {
            temp = temp->right;
        }
    }
}

// levelorder traversal
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
    cout << "Enter the data to create BST " << endl;

    takeInput(root);

    levelOrderTraversal(root);

    return 0;
}

// TRAVERSAL CODE WILL BE REMAIN SAME FOR BST
#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *next;
};
struct node *top = NULL;

bool isEmpty()
{
    if (top == NULL)
    {
        return true;
    }
    return false;
}

void push(int val)
{
    struct node *newNode = new node();

    if (!newNode)
    {
        cout << "heap overflow" << endl;
        exit(1);
    }
    newNode->data = val;
    newNode->next = top;
    top = newNode;
}

int peek()
{
    if (!isEmpty())
    {
        return top->data;
    }
    else
    {
        exit(1);
    }
}

void pop()
{
    struct node *temp;

    // Check for stack underflow
    if (top == NULL)
    {
        cout << "\nStack Underflow" << endl;
        exit(1);
    }
    else
    {

        // Top assign into temp
        temp = top;

        // Assign second node to top
        top = top->next;

        // Destroy connection between
        // first and second
        temp->next = NULL;

        // Release memory of top node
        free(temp);
    }
}

void display()
{
    struct node *temp;

    // Check for stack underflow
    if (top == NULL)
    {
        cout << "\nStack Underflow";
        exit(1);
    }
    else
    {
        temp = top;
        while (temp != NULL)
        {

            // Print node data
            cout << temp->data << "-> ";

            // Assign temp link to temp
            temp = temp->next;
        }
    }
}

int main(int argc, char const *argv[])
{

    return 0;
}
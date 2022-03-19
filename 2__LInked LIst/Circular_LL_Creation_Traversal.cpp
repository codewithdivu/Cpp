#include <bits/stdc++.h>
using namespace std;

// CREATION OF CLASS NODE 

class node
{
public:
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};

// TRAVERSAL OF CIRCULAR LINKED LIST 

void Traversal(node *head)
{
    node *temp = head;

    do
    {
        cout << temp->data << "->";
        temp = temp->next;
    } while (temp != head);
    cout << "NULL";
}

int main(int argc, char const *argv[])
{
    node *head = new node(5);
    node *second = new node(7);
    node *third = new node(9);
    node *last = new node(11);

    head->next = second;
    second->next = third;
    third->next = last;
    last->next = head;

    Traversal(head);
    return 0;
}
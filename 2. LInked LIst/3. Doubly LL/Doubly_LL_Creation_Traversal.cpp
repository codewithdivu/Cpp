#include <bits/stdc++.h>
using namespace std;

// CREATION A CLASS NODE

class node
{
public:
    int data;
    node *prev;
    node *next;

    node(int val)
    {
        data = val;
        prev = NULL;
        next = NULL;
    }
};

// TRAVERSAL OF DOUBLY LINKED LIST

void Traversal(node *head)
{
    node *temp = head;

    // cout << "NULL";
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL";
}

int main(int argc, char const *argv[])
{
    node *head = new node(10);
    node *second = new node(20);
    node *third = new node(30);
    node *fourth = new node(40);
    node *last = new node(50);

    head->next = second;
    second->prev = head;
    second->next = third;
    third->prev = second;
    third->next = fourth;
    fourth->prev = third;
    fourth->next = last;
    last->prev = fourth;

    Traversal(head);

    return 0;
}
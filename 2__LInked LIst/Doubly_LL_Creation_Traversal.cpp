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

// INSERTION A NODE AT BEGINING IN DOUBLY LINKED LIST

node *InsertAtFirst(node *head, int val)
{
    node *newNode = new node(val);
    // node *p = newNode;
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
    return head;
}

// INSERTION A NODE AT LAST IN DOUBLY LINKED LIST

node *InsertAtEnd(node *head, int val)
{
    node *newNode = new node(val);
    node *p = head;
    // node *q = head->prev;
    while (p->next != NULL)
    {
        p = p->next;
        // q=q->next;
    }
    p->next = newNode;
    newNode->prev = p;
    return head;
}

node *InsertAfterNode(node *head, node *preNode, int val)
{
    node *newNode = new node(val);
    
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

    // Traversal(head);

    // head = InsertAtFirst(head, 101);
    // Traversal(head);

    // head = InsertAtEnd(head, 555);
    // Traversal(head);

    head = InsertAfterNode(head, third, 555);
    Traversal(head);
    return 0;
}
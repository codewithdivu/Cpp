#include <bits/stdc++.h>
using namespace std;

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



void Traversal(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL";
}

// INSERTION A NODE AT THE END OF SINGLY LINKED LIST

node *InsertAtEnd(node *head, int val)
{
    node *temp = head;
    node *newNode = new node(val);
    if (head == NULL)
    {
        head = newNode;
        return head;
    }

    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    return head;
}

// INSERTION A NODE AT FIRST IN SINGLY LINKED LIST

node *InsertAtFirst(node *head, int val)
{
    node *newNode = new node(val);
    newNode->next = head;
    head = newNode;
    return head;
}

// INSERTION A NODE AFTER GIVEN NODE

node *InsertAfterNode(node *head, node *preNode, int val)
{
    node *newNode = new node(val);
    newNode->next = preNode->next;
    preNode->next = newNode;
    return head;
}

// INSERTION OF A NODE AT GIVEN INDEX

node *InsertAtIndex(node *head, int index, int val)
{
    node *temp = head;
    node *newNode = new node(val);
    int i = 0;

    while (i != index - 1)
    {
        temp = temp->next;
        i++;
    }
    newNode->next = temp->next;
    temp->next = newNode;
    return head;
}

int main(int argc, char const *argv[])
{
    // node *head = new node(1);
    // head->next = NULL;
    node *head = NULL;

    // node *second = new node(3);
    // node *third = new node(5);
    // node *last = new node(7);
    // head->next = second;
    // second->next = third;
    // third->next = last;

    // // Traversal(head);

    head = InsertAtEnd(head, 7);
    head = InsertAtEnd(head, 8);
    head = InsertAtEnd(head, 9);
    Traversal(head);

    // head = InsertAtFirst(head, 7);
    // Traversal(head);

    // head = InsertAfterNode(head, head, 999);
    // Traversal(head);

    // head = InsertAtIndex(head, 3, 999);
    // Traversal(head);

    return 0;
}

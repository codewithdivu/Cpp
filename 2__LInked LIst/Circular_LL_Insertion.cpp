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

    do
    {
        cout << temp->data << "->";
        temp = temp->next;
    } while (temp != head);
    cout << "NULL";
}

// INSERTION A NODE AT FIRST IN CIRCULAR LINKED LIST

node *InsertAtStart(node *head, int val)
{
    node *temp = head;
    node *newNode = new node(val);
    while (temp->next != head)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->next = head;
    head = newNode;
    return head;
}

// INSERTION A NODE AT END OF THE CIRCULAR LINKED LIST

node *InsertAtEnd(node *head, int val)
{
    node *temp = head;
    node *newNode = new node(val);
    while (temp->next != head)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->next = head;
    return head;
}

// INSERTION A NODE AFTER GIVEN NODE IN CIRCULAR LINKED LIST

node *InsertAfterNode(node *head, node *preNode, int val)
{
    node *newNode = new node(val);
    newNode->next = preNode->next;
    preNode->next = newNode;
    return head;
}

// INSERTION A NODE AT GIVEN INDEX IN CIRCULAR LINKED LIST

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
    node *head = new node(5);
    node *second = new node(7);
    node *third = new node(9);
    node *last = new node(11);

    head->next = second;
    second->next = third;
    third->next = last;
    last->next = head;

    // head = InsertAtStart(head, 90);
    // Traversal(head);

    // head = InsertAtEnd(head, 90);
    // Traversal(head);

    // head = InsertAfterNode(head, third, 999);
    // Traversal(head);

    // head = InsertAtIndex(head, 1, 999);
    // Traversal(head);

    return 0;
}
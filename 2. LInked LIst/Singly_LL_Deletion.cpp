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

// DELETION OF FIRST NODE IN SINGLY LINKED LIST

node *DeleteAtFirst(node *head)
{
    node *temp = head;
    head = head->next;
    free(temp);
    return head;
}

// DELETION OF LAST NODE OF SINGLY LINKED LIST

node *DeleteAtEnd(node *head)
{
    node *p = head;
    node *q = p->next;
    while (q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    p->next = NULL;
    free(q);
    return head;
}

// DELETION OF NODE AT GIVEN INDEX

node *DeleteAtIndex(node *head, int index)
{
    node *p = head;
    node *q = p->next;
    if (index == 0)
    {
        return head = head->next;
    }
    for (int i = 0; i < index - 1; i++)
    {
        p = p->next;
        q = q->next;
    }
    p->next = q->next;
    free(q);
    return head;
}

// DELETION OF NODE AT GIVEN VALUE

node *DeleteAtValue(node *head, int value)
{
    node *p = head;
    node *q = p->next;

    while (q->data != value && q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }

    if (q->data == value)
    {
        p->next = q->next;
        free(q);
        return head;
    }
    else
    {
        cout << "Value is not found in singly linked list" << endl;
        return head;
    }
}

int main(int argc, char const *argv[])
{
    node *head = new node(1);
    node *second = new node(3);
    node *third = new node(5);
    node *last = new node(7);

    head->next = second;
    second->next = third;
    third->next = last;

    // Traversal(head);

    // head=DeleteAtFirst(head);
    // Traversal(head);

    // head = DeleteAtEnd(head);
    // Traversal(head);

    // head = DeleteAtIndex(head, 1);
    // Traversal(head);

    head = DeleteAtValue(head, 11);
    Traversal(head);

    return 0;
}
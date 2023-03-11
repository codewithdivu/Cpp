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

// DELETION A NODE AT FIRST IN CIRCULAR LINKED LIST

node *DeleteAtFirst(node *head)
{
    node *p = head;
    node *q = p->next;

    while (p->next != head)
    {
        p = p->next;
        q = q->next;
    }
    p->next = q->next;
    free(q);
    head = p->next;
    return head;
}

// DELETION A NODE AT END OF THE CIRCULAR LINKED LIST

node *DeleteAtEnd(node *head)
{
    node *p = head;
    node *q = p->next;
    while (q->next != head)
    {
        p = p->next;
        q = q->next;
    }
    p->next = head;
    free(q);
    return head;
}

// DELETION A NODE AT GIVEN INDEX IN CIRCULAR LINKED LIST

node *DeleteAtIndex(node *head, int index)
{
    node *p = head;
    node *q = p->next;
    for (int i = 0; i < index - 1; i++)
    {
        p = p->next;
        q = q->next;
    }
    p->next = q->next;
    free(q);
    return head;
}

// DELETION AT GIVEN VALUE IN CIRCULAR LINKED LISR

node *DeleteAtValue(node *head, int value)
{
    node *p = head;
    node *q = p->next;
    while (q->data != value && q->next != head)
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
        cout << "Value not found in Circular linked list" << endl;
        return head;
    }
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

    // Traversal(head);

    // head = DeleteAtFirst(head);
    // Traversal(head);

    // head = DeleteAtEnd(head);
    // Traversal(head);

    // head = DeleteAtIndex(head, 1);
    // Traversal(head);

    // head = DeleteAtValue(head, 22);
    // Traversal(head);

    return 0;
}
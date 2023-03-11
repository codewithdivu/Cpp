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

node *InsertAtTail(node *&head, int val)
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

void makeIntersect(node *&head1, node *&head2, int position)
{
    node *temp1 = head1;
    node *temp2 = head2;
    position--;
    while (position--)
    {
        temp1 = temp1->next;
    }
    while (temp2->next != NULL)
    {
        temp2 = temp2->next;
    }
    temp2->next = temp1;
}

int Length(node *head)
{
    node *temp = head;
    int len = 0;
    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }
    return len;
}

int Intersaction(node *&head1, node *&head2)
{
    int l1 = Length(head1);
    int l2 = Length(head2);

    int d = 0;
    node *ptr1;
    node *ptr2;

    if (l1 > l2)
    {
        d = l1 - l2;
        ptr1 = head1;
        ptr2 = head2;
    }
    else
    {
        d = l2 - l1;
        ptr1 = head2;
        ptr2 = head1;
    }

    while (d--)
    {
        ptr1 = ptr1->next;
    }

    while (ptr1 != NULL && ptr2 != NULL)
    {
        if (ptr1 == ptr2)
        {
            return ptr1->data;
        }
    
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }

    return -1;
}

int main(int argc, char const *argv[])
{
    node *head1 = NULL;
    node *head2 = NULL;

    InsertAtTail(head1, 11);
    InsertAtTail(head1, 22);
    InsertAtTail(head1, 33);
    InsertAtTail(head1, 44);
    InsertAtTail(head1, 55);
    InsertAtTail(head1, 66);
    InsertAtTail(head1, 77);
    InsertAtTail(head2, 101);
    InsertAtTail(head2, 122);
    InsertAtTail(head2, 133);

    makeIntersect(head1, head2, 4);

    Traversal(head1);
    cout << endl;
    Traversal(head2);
    cout << endl;
    cout << "Intersection point is " << Intersaction(head1, head2);
    return 0;
}
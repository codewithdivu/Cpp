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

void DisplayLL(node *head)
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

node *merge2LL(node *&head1, node *&head2)
{
    node *p1 = head1;
    node *p2 = head2;
    node *dummy = new node(-1);
    node *p3 = dummy;

    while (p1 != NULL && p2 != NULL)
    {
        if (p1->data < p2->data)
        {   
            p3->next = p1;
            p1 = p1->next;
        }
        else
        {
            p3->next = p2;
            p2 = p2->next;
        }
        p3 = p3->next;
    }
    while (p1 != NULL)
    {
        p3->next = p1;
        p1 = p1->next;
        p3 = p3->next;
    }
    while (p2 != NULL)
    {
        p3->next = p2;
        p2 = p2->next;
        p3 = p3->next;
    }

    return dummy->next;
}

int main(int argc, char const *argv[])
{
    node *head1 = NULL;
    node *head2 = NULL;

    int arr1[] = {1, 4, 5, 7};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int arr2[] = {2, 3, 6};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    for (int i = 0; i < n1; i++)
    {
        InsertAtTail(head1, arr1[i]);
    }
    for (int i = 0; i < n2; i++)
    {
        InsertAtTail(head2, arr2[i]);
    }

    DisplayLL(head1);
    cout << endl;
    DisplayLL(head2);
    cout << endl;

    node *lund = merge2LL(head1, head2);
    DisplayLL(lund);
    return 0;
}
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

void DisplayLL(node *&head)
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

void evenAfterOdd(node *&head)
{
    node *odd = head;
    node *even = head->next;
    node *evenStart = even;

    while (odd->next != NULL && even->next != NULL)
    {
        odd->next = even->next;
        odd = odd->next;
        even->next = odd->next;
        even = even->next;
    }
    odd->next = evenStart;
    if (odd->next != NULL)
    {
        even->next = NULL;
    }
}


int main(int argc, char const *argv[])
{
    node *head = NULL;

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i++)
    {
        InsertAtTail(head, arr[i]);
    }

    DisplayLL(head);
    cout << endl;
    evenAfterOdd(head);
    DisplayLL(head);

    return 0;
}
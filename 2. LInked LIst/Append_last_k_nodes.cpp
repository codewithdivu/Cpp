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

node *AppendKnode(node *&head, int k)
{
    node *tail = head;
    node *newTail;
    node *newHead;
    int count = 1;
    int len = Length(head);
    while (tail->next != NULL)
    {
        if (count == len - k)
        {
            newTail = tail;
        }
        if (count == len - k + 1)
        {
            newHead = tail;
        }
        tail = tail->next;
        count++;
    }
    newTail->next = NULL;
    tail->next = head;
    // newHead = head;
    return newHead;
}

int main(int argc, char const *argv[])
{
    node *head = NULL;

    int arr[] = {21, 54, 848, 74, 65, 9, 7, 245, 54, 654, 787, 32, 78, 45};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i++)
    {
        InsertAtTail(head, arr[i]);
    }

    DisplayLL(head);
    cout << endl;
    node *lund = AppendKnode(head, 3);
    DisplayLL(lund);

    return 0;
}
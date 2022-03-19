#include <bits/stdc++.h>
using namespace std;

// CREATION OF LINKED LIST

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

// ADDING A NODES IN CIRCUALR LL

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

// MAKING A STARTING VARIABLE

void makehead(node *&head, int index)
{
    node *temp = head;
    for (int i = 0; i < index; i++)
    {
        temp = temp->next;
    }
    head = temp;
}

// MAKING LL CIRCLUAR

void makeLLCircular(node *&head)
{
    node *lu = head;
    while (lu->next != NULL)
    {
        lu = lu->next;
    }
    lu->next = head;
}

void DeleteAtIndex(node *&head, int index)
{
    node *p = head;
    node *q = p->next;
    // if (index == 0)
    // {
    //     return head = head->next;
    // }
    for (int i = 0; i < index -1; i++)
    {
        p = p->next;
        q = q->next;
    }
    p->next = q->next;
    free(q);
    head = p->next;
}

void begining(node *&head, int position)
{
    while (head->next != head)
    {

        DeleteAtIndex(head, position);
    }
    cout << head->data << endl;
}

int main(int argc, char const *argv[])
{
    node *head = NULL;
    int arr[] = {1,2,3,4,5,6,7};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i++)
    {
        InsertAtTail(head, arr[i]);
    }
    int l;
    int in;

    makeLLCircular(head);

    cout << "enter the index where from game begining...";
    cin >> in;
    makehead(head, in);

    cout << "enter the postion..";
    cin >> l;

    begining(head,l);
    return 0;
}

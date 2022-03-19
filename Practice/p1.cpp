#include <bits/stdc++.h>
using namespace std;

// CREATING A CLASS NODE

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

// TRAVERSAL OF SINGLY LINKED LIST

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

node *Reverse_LL(node *head)
{
    if(head==NULL || head->next == NULL)
    {
        return head;
    }
    node* newHead = Reverse_LL(head->next);
    head->next->next = head;
    head->next = NULL;

    return newHead;
}

int main(int argc, char const *argv[])
{
    node *head = new node(5);
    node *second = new node(10);
    node *third = new node(15);
    node *fourth = new node(20);
    node *last = new node(25);

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = last;

    Traversal(head);
    cout << endl;
    head = Reverse_LL(head);
    Traversal(head);

    return 0;
}
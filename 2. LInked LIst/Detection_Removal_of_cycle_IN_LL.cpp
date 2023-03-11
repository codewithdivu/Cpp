
// FLOYD'S ALGORITHM  OR HARE AND TORTOISE ALGORITHM

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

bool detectCycle(node *head)
{
    node *slow = head;
    node *fast = head;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;

        if (fast == slow)
        {
            return true;
        }
    }
    return false;
}

void makeCycle(node *head, int position)
{
    node *temp = head;
    node *newNode;

    int counter = 1;
    while (temp->next != NULL)
    {
        if (counter == position)
        {
            newNode = temp;
        }
        temp = temp->next;
        counter++;
    }   
    temp->next = newNode;
}

void removeCycle(node *head)
{
    node *slow = head;
    node *fast = head;

    do
    {
        slow = slow->next;
        fast = fast->next->next;
    } while (slow != fast);

    fast = head;
    while (slow->next != fast->next)
    {
        slow = slow->next;
        fast = fast->next;
    }
    slow->next = NULL;
}

int main(int argc, char const *argv[])
{
    node *head = new node(1);

    node *second = new node(3);
    node *third = new node(5);
    node *fourth = new node(9);
    node *last = new node(13);
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = last;

    // Traversal(head);

    // checkCycle(head);

    makeCycle(head, 3);
    cout << detectCycle(head);
    
    removeCycle(head);
    cout << detectCycle(head);

    Traversal(head);
    return 0;
}
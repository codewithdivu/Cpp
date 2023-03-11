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

int MaxValueOfLL(node *head)
{
    int max = INT_MIN;

    node *temp = head;

    while (temp != NULL)
    {
        if (temp->data > max)
        {
            max = temp->data;
        }
        temp = temp->next;
    }
    return max;
}
int MinValueOfLL(node *head)
{
    int min = INT_MAX;

    node *temp = head;

    while (temp != NULL)
    {
        if (temp->data < min)
        {
            min = temp->data;
        }
        temp = temp->next;
    }
    return min;
}

int main(int argc, char const *argv[])
{
    node *head = NULL;

    int arr[] = {21, 54, 84, 74, 65, 9, 79, 2454, 54, 654, 87, 32, 78, 45};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i++)
    {
        InsertAtTail(head, arr[i]);
    }

    // DisplayLL(head);

    cout << "The Maximum value of this LL is " << MaxValueOfLL(head) << endl;
    cout << "The Minimum value of this LL is " << MinValueOfLL(head) << endl;
    return 0;
}
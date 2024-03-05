#include <bits/stdc++.h>
using namespace std;

// CREATION A CLASS NODE

class node
{
public:
    int data;
    node *prev;
    node *next;

    node(int val)
    {
        data = val;
        prev = NULL;
        next = NULL;
    }
};

// TRAVERSAL OF DOUBLY LINKED LIST

void Traversal(node *head)
{
    node *temp = head;

    // cout << "NULL";
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL";
}


// DELETION OF FIRST NODE IN DOUBLY LINKED LIST
node *deleteAtHead(node *head)
{
    node *temp = head;
    head = head->next;
    head->prev = NULL;
    free(temp);
    return head;
}

// DELETION OF LAST NODE IN DOUBLY LINKED LIST
node *deleteAtEnd(node *head)
{
    node *temp = head;
    node *femp = temp->next;
    while (femp->next != NULL)
    {
        temp = temp->next;
        femp = femp->next;
    }
    femp->prev = NULL;
    temp->next = NULL;
    return head;
}

// DELETION OF NODE AT INDEX IN DOUBLY LINKED LIST
node *DeleteAtIndex(node *head, int index)
{
    if (index < 0 || head == NULL) {
        return head; 
    }
    
    if (index == 0) {
        node *temp = head;
        head = head->next;
        if (head != NULL) {
            head->prev = NULL;
        }
        delete temp;
        return head;
    }
    
    node *current = head;
    int currentIndex = 0;
    while (current != NULL && currentIndex < index) {
        current = current->next;
        currentIndex++;
    }
    
    if (current == NULL) {
        return head;
    }
    
    current->prev->next = current->next;
    if (current->next != NULL) {
        current->next->prev = current->prev;
    }
    delete current;
    
    return head;
}

// DELETION OF NODE AT VALUE IN DOUBLY LINKED LIST
node *DeleteByValue(node *head, int val)
{
    node *current = head;
    while (current != NULL && current->data != val) {
        current = current->next;
    }
    
    if (current == NULL) {
        return head;
    }
    
    if (current->prev == NULL) {
        head = current->next;
    } else {
        current->prev->next = current->next;
    }
    
    if (current->next != NULL) {
        current->next->prev = current->prev;
    }
    
    delete current;
    
    return head;
}


int main(int argc, char const *argv[])
{
    node *head = new node(10);
    node *second = new node(20);
    node *third = new node(30);
    node *fourth = new node(40);
    node *last = new node(50);

    head->next = second;
    second->prev = head;
    second->next = third;
    third->prev = second;
    third->next = fourth;
    fourth->prev = third;
    fourth->next = last;
    last->prev = fourth;

    return 0;
}
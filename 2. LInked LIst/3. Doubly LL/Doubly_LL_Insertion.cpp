#include <bits/stdc++.h>
using namespace std;


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

// INSERTION A NODE AT BEGINING IN DOUBLY LINKED LIST

node *InsertAtFirst(node *head, int val)
{
    node *newNode = new node(val);
    // node *p = newNode;
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
    return head;
}

// INSERTION A NODE AT LAST IN DOUBLY LINKED LIST

node *InsertAtEnd(node *head, int val)
{
    node *newNode = new node(val);
    node *p = head;
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = newNode;
    newNode->prev = p;
    return head;
}

// INSERTION A NODE AFTER A NODE IN DOUBLY LINKED LIST

node *InsertAfterNode(node *head, node *preNode, int val)
{
    if(preNode == NULL){
        return NULL;
    }
    node *newNode = new node(val);
    newNode->next = preNode->next;
    newNode->prev = preNode;

    if(preNode->next != NULL){
        preNode->next->prev = newNode;
    }
    preNode->next = newNode;
    return head;
}

// INSERTION A NODE AT PARTICULAR INDEX IN DOUBLY LINKED LIST

node *InsertAtIndex(node *head, int index, int val)
{
    if (index < 0) {
        return head;
    }
    
    node *newNode = new node(val);
    if (index == 0) {
        newNode->next = head;
        if (head != NULL) {
            head->prev = newNode;
        }
        return newNode;
    }
    
    node *current = head;
    int currentIndex = 0;
    while (current != NULL && currentIndex < index - 1) {
        current = current->next;
        currentIndex++;
    }
    
    if (current == NULL) {
        return head; 
    }
    
    newNode->next = current->next;
    newNode->prev = current;
    if (current->next != NULL) {
        current->next->prev = newNode;
    }
    current->next = newNode;
    
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

    // Traversal(head);

    // head = InsertAtFirst(head, 101);
    // Traversal(head);

    // head = InsertAtEnd(head, 555);
    // Traversal(head);

    head = InsertAfterNode(head, third, 555);
    Traversal(head);
    return 0;
}
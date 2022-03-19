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

class Queue
{
    node *front;
    node *back;

public:
    Queue()
    {
        front = NULL;
        back = NULL;
    }

    void Enqueue(int val);
    int Dequeue();
    int Peek();
    bool isEmpty();
};

bool Queue::isEmpty()
{
    if (front == NULL)
    {
        return true;
    }
    return false;
}

void Queue::Enqueue(int val)
{
    node *newnode = new node(val);

    if (front == NULL)
    {
        back = newnode;
        front = newnode;
    }
    back->next = newnode;
    back = newnode;
}

int Queue::Dequeue()
{
    if (isEmpty())
    {
        cout << "Queue is UnderFlow" << endl;
    }
    node *temp = front;
    int l = temp->data;
    front = front->next;

    delete temp;
    return l;
}

int Queue::Peek()
{
    if (isEmpty())
    {
        cout << "Queue is Empty" << endl;
        return 0;
    }
    return front->data;
}

int main(int argc, char const *argv[])
{
    Queue q;

    q.Enqueue(11);
    q.Enqueue(22);
    q.Enqueue(33);
    q.Enqueue(44);
    q.Enqueue(55);

    cout << "Dequed element is " << q.Dequeue() << endl;
    // cout << "Dequed element is " << q.Dequeue() << endl;
    // cout << "Dequed element is " << q.Dequeue() << endl;
    // cout << "Dequed element is " << q.Dequeue() << endl;

    // cout<<"Peek element of queue is "<<q.Peek()<<endl;
    
    return 0;
}
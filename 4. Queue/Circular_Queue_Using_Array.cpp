#include <iostream>
using namespace std;

class circularQueue
{
    int rear, front;
    int size;
    int *arr;

public:
    circularQueue(int s)
    {
        front = rear = -1;
        size = s;
        arr = new int[s];
    }

    void enQueue(int value);
    int deQueue();
    void displayQueue();
    bool isFull();
    bool isEmpty();
};

bool circularQueue::isFull()
{
    if ((front == 0 && rear == size - 1) ||
        ((rear + 1) % size == front))
    {
        return true;
    }
    return false;
}
bool circularQueue::isEmpty()
{
    if (front == -1)
    {
        return true;
    }
    return false;
}
void circularQueue::enQueue(int value)
{
    if (isFull())
    {
        cout << "circularQueue is Full" << endl;
        return;
    }

    else if (front == -1)
    {
        front = rear = 0;
        arr[rear] = value;
    }

    else if (rear == size - 1 && front != 0)
    {
        rear = 0;
        arr[rear] = value;
    }

    else
    {
        rear++;
        arr[rear] = value;
    }
}

int circularQueue::deQueue()
{
    if (isEmpty())
    {
        cout << "circularQueue is Empty" << endl;
        return INT_MIN;
    }

    int data = arr[front];
    arr[front] = -1;
    if (front == rear)
    {
        front = -1;
        rear = -1;
    }
    else if (front == size - 1)
        front = 0;
    else
        front++;

    return data;
}

void circularQueue::displayQueue()
{
    if (isEmpty())
    {
        cout << "circularQueue is Empty" << endl;
        return;
    }
    cout << "Elements in Circular circularQueue are: " << endl;
    if (rear >= front)
    {
        for (int i = front; i <= rear; i++)
            cout << arr[i] << " ";
    }
    else
    {
        for (int i = front; i < size; i++)
            cout << arr[i] << " ";

        for (int i = 0; i <= rear; i++)
            cout << arr[i] << " ";
    }
}

int main()
{
    circularQueue q(5);

    q.enQueue(14);
    q.enQueue(22);
    q.enQueue(13);
    q.enQueue(-6);

    q.displayQueue();

    printf("\nDeleted value = %d", q.deQueue());
    printf("\nDeleted value = %d", q.deQueue());

    q.displayQueue();

    q.enQueue(9);
    q.enQueue(20);
    q.enQueue(5);

    q.displayQueue();

    q.enQueue(20);
    return 0;
}


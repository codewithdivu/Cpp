#include <bits/stdc++.h>
using namespace std;

class Queue
{
    int size;
    int *queue;

public:
    Queue()
    {
        size = 0;
        queue = new int[100];
    }
    void remove()
    {
        if (size == 0)
        {
            cout << "queue is empty" << endl;
        }
        else
        {
            for (int i = 0; i < size - 1; i++)
            {
                queue[i] = queue[i + 1];
            }
            size--;
        }
    }
    void print()
    {
        if (size == 0)
        {
            cout << "queue is empty" << endl;
        }
        for (int i = 0; i < size; i++)
        {
            cout << queue[i] << " <- ";
        }
        cout << endl;
    }

    void add(int i)
    {
        queue[size] = i;
        size++;
    }
};

int main(int argc, char const *argv[])
{
    Queue q;
    q.add(42);
    q.add(2);
    q.add(8);
    q.add(1);
    q.print();
    q.remove();
    q.remove();
    q.remove();
    q.print();
    return 0;
}
#include <iostream>
using namespace std;

struct stackNode
{
    int data;
    stackNode *next;

    stackNode(int val)
    {
        this->data = val;
        this->next = NULL;
    }
};

class Stack
{
    stackNode *top;

public:
    Stack()
    {
        this->top = NULL;
    }

    ~Stack()
    {
        while (!isEmpty())
        {
            pop();
        }
    }

    bool isEmpty();
    void push(int val);
    void pop();
    int peek();
};

bool Stack::isEmpty()
{
    if (top == NULL)
    {
        return true;
    }
    return false;
}

void Stack::push(int val)
{
    stackNode *newNode = new stackNode(val);
    newNode->next = top;
    top = newNode;
}

void Stack::pop()
{
    if (isEmpty())
    {
        cout << "Stack is empty" << endl;
        return;
    }
    stackNode *temp = top;
    top = top->next;
    free(temp);
}

int Stack::peek()
{
    if (isEmpty())
    {
        cout << "Stack is Empty" << endl;
        return -1;
    }
    return top->data;
}

int main(int argc, char const *argv[])
{
    Stack intStack;
    intStack.push(10);
    intStack.push(20);
    intStack.push(30);

    cout << "Top element: " << intStack.peek() << endl;
    intStack.pop();
    cout << "Top element after pop: " << intStack.peek() << endl;

    return 0;
}
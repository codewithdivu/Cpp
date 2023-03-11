#include <bits/stdc++.h>
using namespace std;

class Queue
{
    stack<int> s1;
    stack<int> s2;

public:
    void push(int val)
    {
        s1.push(val);
    }
    bool isEmpty()
    {
        if (s1.empty() && s2.empty())
        {   
            return true;
        }
        return false;
    }
    int pop()
    {
        if (isEmpty())
        {
            cout << "Queue is Empty" << endl;
            return 0;
        }

        if (s2.empty())
        {
            while (!s1.empty())
            {
                s2.push(s1.top());
                s1.pop();
            }
        }
        int topval = s2.top();
        s2.pop();
        return topval;
    }
};

int main(int argc, char const *argv[])
{
    Queue q;
    q.push(11);
    q.push(22);
    q.push(33);
    q.push(44);
    q.push(55);

    cout << "Poped element is " << q.pop() << endl;
    return 0;
}
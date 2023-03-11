#include <bits/stdc++.h>
using namespace std;
#define SIZE 10
class dequeue
{
    int a[20], f, r;

public:
    dequeue();
    void insert_at_beg(int);
    void insert_at_end(int);
    void delete_fr_front();
    void delete_fr_rear();
    void show();
};
dequeue::dequeue()
{
    f = -1;
    r = -1;
}
void dequeue::insert_at_end(int i)
{
    if (r >= SIZE - 1)
    {
        cout << "\n insertion is not possible, overflow";
    }
    else
    {
        if (f == -1)
        {
            f++;
            r++;
        }
        else
        {
            r = r + 1;
        }
        a[r] = i;
        cout << "\nInserted item is" << a[r];
    }
}
void dequeue::insert_at_beg(int i)
{
    if (f == -1)
    {
        f = 0;
        a[++r] = i;
        cout << "\n inserted element is:" << i;
    }
    else if (f != 0)
    {
        a[--f] = i;
        cout << "\n inserted element is:" << i;
    }
    else
    {
        cout << "\n insertion is not possible, overflow!!!";
    }
}
void dequeue::delete_fr_front()
{
    if (f == -1)
    {
        cout << "deletion is not possible::dequeue is empty";
        return;
    }
    else
    {
        cout << "the deleted element is:" << a[f];
        if (f == r)
        {
            f = r = -1;
            return;
        }
        else
            f = f + 1;
    }
}
void dequeue::delete_fr_rear()
{
    if (f == -1)
    {
        cout << "deletion is not possible::dequeue is empty";
        return;
    }
    else
    {
        cout << "the deleted element is:" << a[r];
        if (f == r)
        {
            f = r = -1;
        }
        else
            r = r - 1;
    }
}
void dequeue::show()
{
    if (f == -1)
    {
        cout << "Dequeue is empty";
    }
    else
    {
        for (int i = f; i <= r; i++)
        {
            cout << a[i] << " ";
        }
    }
}
int main(int argc, char const *argv[])
{
    dequeue d;
    return 0;
}

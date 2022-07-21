#include <iostream>
#include <queue>

using namespace std;
int main()
{

    queue<string> q;

    q.push("love");
    q.push("Babbar");
    q.push("Kumar");
    q.pop();

    cout << "Size before pop" << q.size() << endl;

    cout << "First Element " << q.front() << endl;
    q.pop();
    cout << "last Element " << q.back() << endl;

    cout << "empy or not" << q.empty() << endl;

    cout << "Size after pop" << q.size() << endl;

    return 0;
}

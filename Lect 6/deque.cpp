#include <bits/stdc++.h>

using namespace std;

void printdq(deque<int> dq)
{
    for (auto i : dq)
    {
        cout << i << " ";
    }
    cout << endl;
}
int main()
{

    deque<int> dq;

    dq.push_back(1);
    dq.push_back(2);

    printdq(dq);

    dq.push_front(0);
    printdq(dq);
    dq.push_front(2);
    printdq(dq);
    dq.push_front(3);
    printdq(dq);
}
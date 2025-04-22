#include <bits/stdc++.h>
using namespace std;

int main()
{

    queue<int> q;

    // insert -> p.push(x);

    q.push(1);
    q.push(3);
    q.push(5);
    q.push(2);

    // q.front() // returns the first element

    // cout << q.front() << endl; // 1

    // q.pop(); // delete the first elemnt

    // cout << q.front() << endl;

    // cout << q.back() << endl; // print last element

    // traverse krna h

    // for (auto i : q)
    // {
    //     cout << i << " ";
    // }

    queue<int> temp = q;
    while (temp.size() > 0)
    {
        cout << temp.front() << " ";
        temp.pop();
    }
}
#include <bits/stdc++.h>

using namespace std;

class Queue
{

private:
    int start_ptr, end_ptr;
    int max_cap;
    int *arr;

public:
    Queue(int cap)
    {
        max_cap = cap;
        start_ptr = -1;
        end_ptr = -1;
        // curr_size = 0;
        // int arr[50];
        arr = new int[max_cap];
    }
    Queue()
    {
        max_cap = 100;
        arr = new int[max_cap];
    }

    ~Queue()
    {
        delete[] arr;
    }

    void push(int ele)
    {
        if (end_ptr == max_cap - 1)
        {
            cout << "queue already full" << endl;
            return;
        }
        if (end_ptr == -1)
        {
            start_ptr = 0;
        }
        end_ptr++;
        arr[end_ptr] = ele;
    }

    void pop()
    {
        if (start_ptr == -1 or start_ptr > end_ptr)
        {
            cout << "queue is empty" << endl;
            return;
        }
        // if (start_ptr == end_ptr)
        // {
        //     start_ptr++;
        //     return;
        // }
        // if (start_ptr > end_ptr)
        // {
        //     cout << "queue is empty" << endl;
        //     return;
        // }
        start_ptr++;
    }

    int front()
    {
        if (start_ptr == -1 or start_ptr > end_ptr)
        {
            cout << "queue is empty ,cant print element" << endl;
            return INT_MIN;
        }
        return arr[start_ptr];
    }
};

int main()
{
    Queue q(50);
    cout << q.front() << endl;
    q.push(1);
    q.push(2);
    cout << q.front();
    q.pop();
    cout << q.front();
    q.pop();
    q.pop();
    ;
}
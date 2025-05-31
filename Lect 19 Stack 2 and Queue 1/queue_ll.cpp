#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int d)
    {
        data = d;
        next = NULL;
    }
    Node()
    {
        data = 0;
        next = NULL;
    }
};

class Queue
{
    Node *head;
    Node *tail;
    int curr_size;

public:
    Queue()
    {
        head = NULL;
        tail = NULL;
    }

    void push(int ele)
    {
        if (tail == NULL)
        {
            Node *nn = new Node(ele);
            // nn->next = NULL;
            tail = nn;
            head = nn;
        }
        else
        {
            Node *nn = new Node(ele);
            tail->next = nn;
            tail = tail->next;
        }
        curr_size++;
    }

    void pop()
    {
        if (head == NULL)
        {
            cout << "queue is empty" << endl;
            return;
        }
        curr_size--;
        if (head->next == NULL)
        {
            head = NULL;
            tail = NULL;
            return;
        }

        head = head->next;
    }

    int front()
    {
        if (head == NULL)
        {
            cout << "queue is empty ";
            return INT_MIN;
        }
        return head->data;
    }

    int size()
    {
        return curr_size;
    }
};

int main()
{
    Queue q;
    cout << q.front() << endl;
    q.push(1);
    q.push(2);
    cout << q.front() << endl;
    q.pop();
    cout << q.front() << endl;
    q.pop();
    q.pop();
}
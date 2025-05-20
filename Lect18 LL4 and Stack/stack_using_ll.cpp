#include <bits/stdc++.h>

using namespace std;

// push -> insert an element
// pop -> remove an element
// top -> print/ return the top element
// size -> curr size of stack;

class Node
{
public:
    int data;
    Node *next;

    Node()
    {
        data = 0;
        next = NULL;
    }
    Node(int d)
    {
        data = d;
        next = NULL;
    }
};

Node *insert_at_head_LL(Node *head, int data)
{
    Node *nn = new Node(data);
    nn->next = head;
    return nn;
}
Node *delete_at_head_LL(Node *head)
{
    //
    if (head == NULL)
        return NULL;
    Node *temp = head;
    head = head->next;
    delete temp;
    return head;
}

class Stack
{
private:
    int curr_sz;
    Node *head;

public:
    Stack()
    {
        head = NULL;
        curr_sz = 0;
    }

    void push(int val)
    {
        head = insert_at_head_LL(head, val);
        curr_sz++;
    }

    int top()
    {
        if (curr_sz == 0 or head == NULL)
        {
            cout << "stack is empty" << endl;
            return 0;
        }

        return head->data;
    }

    void pop()
    {
        if (curr_sz == 0 or head == NULL)
        {
            cout << "stack is empty" << endl;
            return;
        }

        head = delete_at_head_LL(head);
        curr_sz--;
    }

    int size()
    {
        return curr_sz;
    }
};

int main()
{
    Stack s1;
    s1.pop();
    s1.size();
    cout << s1.top() << endl;

    cout << "----" << endl;
    s1.push(1);
    s1.push(2);
    cout << s1.top() << endl;
    cout << s1.size() << endl;
    s1.pop();
    cout << s1.top() << endl;
    cout << s1.size() << endl;
    s1.pop();
    cout << s1.top() << endl;
    cout << s1.size() << endl;
    s1.pop();
}
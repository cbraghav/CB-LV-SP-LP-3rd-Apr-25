#include <bits/stdc++.h>

using namespace std;

// push -> insert an element
// pop -> remove an element
// top -> print/ return the top element
// size -> curr size of stack;

class Stack
{
private:
    int curr_size;
    int max_cap;
    int *arr;

public:
    Stack(int cap)
    {
        max_cap = cap;
        curr_size = 0;
        // int arr[50];
        arr = new int[max_cap];
    }
    Stack()
    {
        max_cap = 100;
        curr_size = 0;
        arr = new int[max_cap];
    }

    ~Stack()
    {
        delete[] arr;
    }

    void push(int val)
    {
        if (curr_size == max_cap)
        {
            cout << "stack is full" << endl;
            return;
        }
        arr[curr_size] = val;
        curr_size++;
    }

    int top()
    {
        if (curr_size == 0)
        {
            cout << "stack is empty" << endl;
            return 0;
        }
        return arr[curr_size - 1];
    }
    void pop()
    {
        if (curr_size == 0)
        {

            cout << "stack is empty" << endl;
            return;
        }
        curr_size--;
    }
    int size()
    {
        return curr_size;
    }
};

int main()
{

    Stack s1(5);
    // s1.pop();
    // cout << s1.size() << endl;
    // cout << s1.top() << endl;
    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.push(4);
    s1.push(5);
    s1.push(6);
    // cout << s1.top() << endl;
    // cout << s1.size() << endl;
}
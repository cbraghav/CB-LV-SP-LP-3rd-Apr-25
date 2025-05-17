#include <bits/stdc++.h>
using namespace std;

class NodeDLL
{
public:
    int data;
    NodeDLL *next;
    NodeDLL *prev;

    NodeDLL(int d)
    {
        data = d;
        next = NULL;
        prev = NULL;
    }
    NodeDLL()
    {
        data = 0;
        next = prev = NULL;
    }
};
// TC O(N)
void print_DLL(NodeDLL *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}
// TC O(1)
NodeDLL *insert_at_head(NodeDLL *head, int data)
{
    if (head == NULL)
    {
        NodeDLL *nn = new NodeDLL(data);
        return nn;
    }

    NodeDLL *nn = new NodeDLL(data);
    nn->next = head;
    // nn->prev = NULL;
    head->prev = nn;
    return nn;
}

NodeDLL *insert_after_element(NodeDLL *head, int element, int data)
{
    if (head == NULL)
    {
        cout << "LL is empty" << endl;
        return head;
    }

    NodeDLL *curr = head;
    while (curr != NULL)
    {
        if (curr->data == element)
        {
            break;
        }
        curr = curr->next;
    }

    if (curr == NULL)
    {
        cout << "element not found" << endl;
        return head;
    }
    NodeDLL *front = curr->next;
    NodeDLL *nn = new NodeDLL(data);
    curr->next = nn;
    nn->prev = curr;
    nn->next = front;
    if (front != NULL)
        front->prev = nn;

    return head;
}

int main()
{
    NodeDLL *head = insert_at_head(NULL, 5);
    head = insert_at_head(head, 3);
    head = insert_at_head(head, 1);
    print_DLL(head);
    head = insert_after_element(head, 3, 4);

    head = insert_after_element(head, 5, 6);

    head = insert_after_element(head, 1, 2);
    print_DLL(head);
}
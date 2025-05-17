#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }

    Node(int val, Node *nextNode)
    {
        data = val;
        next = nextNode;
    }
};

void print_LL(Node *head)
{
    Node *curr = head;
    while (curr != NULL)
    {
        cout << curr->data << " ";
        curr = curr->next;
    }
    cout << endl;
}

int length_of_LL(Node *head)
{
    Node *curr = head;
    int cnt = 0;
    while (curr != NULL)
    {
        cnt++;
        curr = curr->next;
    }
    cout << "Length of LL " << cnt << endl;
    return cnt;
}

// TC -> O(N);
Node *insert_at_end_LL(Node *head, int data)
{

    Node *new_node = new Node(data);

    if (head == NULL)
    {
        return new_node;
    }

    Node *last = head;
    while (last->next != NULL)
    {
        last = last->next;
    }

    // last element pta h
    last->next = new_node;
    return head;
}

// TC -> O(1)
Node *insert_at_begin_LL(Node *head, int data)
{
    Node *nn = new Node(data);
    nn->next = head;
    return nn;
}

// TC-> O(N)
Node *insert_after_element_LL(Node *head, int element, int data)
{
    if (head == NULL)
    {
        return NULL;
    }

    Node *curr = head;
    while (curr != NULL)
    {
        if (curr->data == element)
        {
            break;
        }
        curr = curr->next;
    }
    if (curr != NULL and curr->data == element)
    {
        Node *nn = new Node(data);
        nn->next = curr->next;
        curr->next = nn;
        return head;
    }
    else
    {
        cout << "element not found" << endl;
        return head;
    }
}

// TC -> O(N);
Node *insert_before_element_LL(Node *head, int elem, int data)
{
    if (head == NULL)
    {
        return head;
    }

    Node *curr = head;
    Node *prev = NULL;
    while (curr != NULL)
    {
        if (curr->data == elem)
        {
            break;
        }

        prev = curr;
        curr = curr->next;
    }

    if (curr != NULL and curr->data == elem)
    {
        Node *nn = new Node(data);
        nn->next = curr;
        if (prev == NULL)
        {
            return nn;
        }
        prev->next = nn;
        return head;
    }
    else
    {
        cout << "element not found" << endl;
        return NULL;
    }
}
// TC O(1)
Node *delete_from_begin_LL(Node *head)
{
    //
    if (head == NULL)
        return NULL;
    Node *temp = head;
    head = head->next;
    delete temp;
    return head;
}

// TC o(N)
Node *delete_from_end_LL(Node *head)
{
    if (head == NULL)
    {
        return NULL;
    }

    if (head->next == NULL)
    {
        // / if list has only one element
        delete head;
        return NULL;
    }

    Node *prev = NULL;
    Node *curr = head;
    while (curr->next != NULL)
    {
        prev = curr;
        curr = curr->next;
    }

    // prev -> 2nd last // curr -> last;

    prev->next = NULL;
    delete curr;
    return head;
}
Node *delete_element_from_LL(Node *head, int ele)
{
    if (head == NULL)
    {
        return NULL;
    }

    if (head->data == ele)
    {
        Node *temp = head;
        head = head->next;
        delete temp;
        return head;
    }

    Node *prev = NULL;
    Node *curr = head;
    while (curr != NULL)
    {
        if (curr->data == ele)
        {
            break;
        }
        prev = curr;
        curr = curr->next;
    }

    if (curr == NULL)
    {
        cout << "element not found" << endl;
        return head;
    }

    // elem found at curr

    prev->next = curr->next;
    delete curr;
    return head;
}
int main()
{
    Node *head = new Node(1);
    Node *second = new Node(2);

    // cout << head->data << " " << head->next << " " << head << endl;
    // cout << second->data << " " << second->next << " " << second << endl;

    head->next = second;

    // cout << head->data << " " << head->next << " " << head << endl;
    // cout << second->data << " " << second->next << " " << second << endl;

    head->next->next = new Node(4);
    head->next->next->next = new Node(5);

    // head

    // print_LL(head);
    // length_of_LL(head);
    // head = insert_at_end_LL(head, 5);
    // head = insert_at_end_LL(head, 6);
    // print_LL(head);
    // head = insert_at_begin_LL(head, 0);
    // head = insert_at_begin_LL(head, -1);
    print_LL(head);

    // head = insert_after_element_LL(head, 2, 3);

    // head = insert_after_element_LL(head, 3, 6);
    // print_LL(head);

    // head = insert_after_element_LL(head, 9, 3);

    // head = insert_before_element_LL(head, 4, 3);

    // head = insert_before_element_LL(head, 1, 0);
    // print_LL(head);
    // head = delete_from_begin_LL(head);
    // head = delete_from_end_LL(head);
    // head = delete_from_end_LL(head);
    // print_LL(head);

    head = delete_element_from_LL(head, 10);
    print_LL(head);
}

#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node()
    {
        data = 0;
        left = right = NULL;
    }
    Node(int d)
    {
        data = d;
        left = right = NULL;
    }
};

// O(N)
void pre_order(Node *curr)
{
    if (curr == NULL)
    {
        return;
    }

    cout << curr->data << " "; // visit
    pre_order(curr->left);
    pre_order(curr->right);
}

void in_order(Node *curr)
{

    if (curr == NULL)
    {
        return;
    }

    // LVR
    in_order(curr->left);
    cout << curr->data << " ";
    in_order(curr->right);
}

void post_order(Node *curr)
{
    if (curr == NULL)
    {
        return;
    }
    // LRV
    post_order(curr->left);
    post_order(curr->right);
    cout << curr->data << " ";
}

int main()
{
    //     Node *root = new Node(1);
    //     Node *node2 = new Node(2);
    //     root->left = node2;
    //     root->right = new Node(3);

    //     /*
    //             1
    //            / \
//           2   3

    //     */

    //     root->left->left = new Node(4);

    //     root->left->right = new Node(5);
    //     root->right->right = new Node(7);

    //     /*
    //             1    -> root
    //            / \
//           2   3
    //         /  \    \
//        4    5    7
    //     */

    //     /*
    //              1    -> root
    //           /   \
//          2      3
    //        /  \    /
    //       4    5  7

    //        root->right->left = 7
    //    */

    /*
                1    -> root
              /   \
             2      3
           /  \    / \
          4    5  6   7
               \     / \
               8    9   10

    */

    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->left->right->right = new Node(8);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    root->right->right->left = new Node(9);
    root->right->right->right = new Node(10);

    cout << "pre order : ";
    pre_order(root);
    cout << endl;

    cout << "in order : ";
    in_order(root);
    cout << endl;

    cout << "post order : ";
    post_order(root);
    cout << endl;
}

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

void bfs(Node *root)
{
    queue<Node *> q;

    q.push(root);

    while (q.size())
    {
        int sz = q.size(); // number of nodes at level
        cout << sz << " -> ";
        for (int i = 0; i < sz; i++)
        {
            //
            Node *front = q.front();
            q.pop();

            cout << front->data << " ";

            if (front->left != NULL)
            {
                q.push(front->left);
            }

            if (front->right != NULL)
            {
                q.push(front->right);
            }
        }
        cout << endl;
    }
}

int main()
{
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

    bfs(root);
}
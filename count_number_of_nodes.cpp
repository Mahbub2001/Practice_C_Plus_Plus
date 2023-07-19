#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *input()
{
    int val;
    cin >> val;
    Node *root;

    if (val == -1)
    {
        root = NULL;
    }
    else
    {
        root = new Node(val);
    }
    queue<Node *> q;
    if (root)
    {
        q.push(root);
    }

    while (!q.empty())
    {
        // 1.
        Node *p = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;

        Node *myLeft;
        Node *myRight;

        if (l == -1)
        {
            myLeft = NULL;
        }
        else
        {
            myLeft = new Node(l);
        }
        if (r == -1)
        {
            myRight = NULL;
        }
        else
        {
            myRight = new Node(r);
        }

        p->left = myLeft;
        p->right = myRight;

        // 3.
        if (p->left)
        {
            q.push(p->left);
        }
        if (p->right)
        {
            q.push(p->right);
        }
    }
    return root;
}

int count(Node *root)
{
    if (root == NULL)
        return 0;
    return count(root->left) + count(root->right) + 1;
}

int count_leaf(Node *root)
{
    if (root == NULL)
        return 0;
    if (root->left == NULL && root->right == NULL)
        return 1;
    else
    {
        return count_leaf(root->left) + count_leaf(root->right);
    }
}
int count_max_height(Node *root)
{
    if (root == NULL)
        return 0;
    int l = count_max_height(root->left);
    int r = count_max_height(root->right);
    return max(l, r) + 1;
}

int main()
{
    Node *root = input();

    cout << "\nTotal Node is : " << count(root) << endl;
    cout << "\nTotal Leaf Node is : " << count_leaf(root) << endl;
    cout << "\nMax Height is : " << count_max_height(root) << endl;

    return 0;
}

// 10 20 30 70 150 120 40 80 90 -1 -1 130 -1 60 50 -1 -1 100 -1 -1 140 -1 -1 -1 -1 -1 110 -1 -1 -1 -1
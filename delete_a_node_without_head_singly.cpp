#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

class Solution
{
public:
    void deleteNode(Node *node)
    {
        Node *deleteNode = node->next;
        node->val = node->next->val;
        node->next = node->next->next;
        delete deleteNode;
    }
};

int main()
{

    return 0;
}
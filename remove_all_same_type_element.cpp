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
Node *removeNodes(Node *&head, int k)
{
    while (head != NULL && head->val == k)
    {
        head = head->next;
    }

    if (head == NULL)
    {
        return NULL;
    }

    Node *current = head;
    while (current->next != NULL)
    {
        if (current->next->val == k)
        {
            current->next = current->next->next;
        }
        else
        {
            current = current->next;
        }
    }

    return head;
}

int main()
{

    return 0;
}
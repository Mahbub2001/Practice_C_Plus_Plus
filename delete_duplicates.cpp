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

Node *remove_duplicates(Node *head)
{
    for (Node *i = head; i->next != NULL; i = i->next)
    {
        for (Node *j = i->next; j != NULL; j = j->next)
        {
            if (i->val > j->val)
            {
                swap(i->val, j->val);
            }
        }
    }

    Node *temp = head;
    while (temp->next != NULL)
    {
        if (temp->val == temp->next->val)
        {
            temp->next = temp->next->next;
        }
        else
        {
            temp = temp->next;
        }
    }

    return head;
}

int main()
{
    Node *head = new Node(1);
    Node *a = new Node(2);
    Node *b = new Node(3);
    Node *c = new Node(2);
    Node *d = new Node(5);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;

    Node *result = remove_duplicates(head);

    while (result != NULL)
    {
        cout << result->val << " ";
        result = result->next;
    }

    return 0;
}
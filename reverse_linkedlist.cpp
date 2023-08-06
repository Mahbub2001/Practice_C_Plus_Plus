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

Node *reverse(Node *head)
{
    Node *prev = NULL;
    Node *current = head;
    while (current != NULL)
    {
        Node *temp = current->next;
        current->next = prev;
        prev = current;
        current = temp;
    }
    return prev;
}

void insert_at_tail(Node *&head, int val)
{
    Node *temp = head;
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

int main()
{
    Node *head = NULL;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        insert_at_tail(head, x);
    }
    head = reverse(head);

    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }

    return 0;
}
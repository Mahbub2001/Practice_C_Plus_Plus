#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
void input_tail(Node *&head, Node *&tail, int x)
{
    Node *newNode = new Node(x);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}
Node *convert_set_to_doubly_linked_list(set<int> &s)
{
    Node *head = NULL;
    Node *tail = NULL;
    for (int val : s)
    {
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
    return head;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        input_tail(head, tail, x);
    }
    set<int> s;
    Node *temp = head;

    while (temp != NULL)
    {
        s.insert(temp->val);
        temp = temp->next;
    }
    Node *update = convert_set_to_doubly_linked_list(s);

    return 0;
}

// Node * removeDuplicates(Node *head)
// {

//     // Initialize 'cur' to store head
//     Node * cur = head;

//     // Run a while loop
//     while (cur != NULL && cur -> next != NULL) {

//         // Next element has same value as the current element
//         if (cur -> next -> val == cur -> val) {
//             // Adjust links to remove the next element
//             cur -> next = cur -> next -> next;
//         }

//         // Next element is different from the current element
//         else {
//             cur = cur -> next;
//         }
//     }

//     return head;
// }
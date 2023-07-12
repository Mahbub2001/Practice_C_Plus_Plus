// #include<bits/stdc++.h>
// using namespace std;
// class Node
// {
// public:
//     int val;
//     Node *next;
//     Node(int val)
//     {
//         this->val = val;
//         this->next = NULL;
//     }
// };
// int main()
// {
//     Node *head = new Node(1);
//     Node *a = new Node(2);
//     Node *b = new Node(4);

//     head ->next=  a;
//     a->next = b;

//     // cout<<head ->val<<" "<<head->next ->val<<" "<<head->next->next->val <<endl;
//     Node *temp = head;
//     while(temp!=NULL){
//         cout<<temp->val<<endl;
//         temp = temp->next;
//     }

//     return 0;
// }

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

void insert_at_tail(Node *&head, int v)
{

    Node *newNode = new Node(v);

    if (head == NULL)
    {
        head = newNode;
        return;
    }

    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    // tmp ekhn last node e
    tmp->next = newNode;
    // newNode->next = NULL;
}

void insert_in_position(Node *&head, int pos, int v)
{
    Node *newNode = new Node(v);
    Node *temp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}

void insert_at_head(Node *&head, int v)
{
    Node *newNode = new Node(v);
    newNode->next = head;
    head = newNode;
}

void print_linkedlist(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << endl;
        temp = temp->next;
    }
}

int main()
{
    Node *head = NULL;
    while (true)
    {
        cout << "Option 1: insert at tail\n Option 2: print linked list\n Option 3: insert in a position\n Option 4:insert at head\n option 5: terminated" << endl;
        int op;
        cin >> op;

        if (op == 1)
        {
            int v;
            cin >> v;
            insert_at_tail(head, v);
        }
        else if (op == 2)
        {
            print_linkedlist(head);
        }
        else if (op == 3)
        {
            int pos, v;
            cin >> pos >> v;
            if (pos == 0)
            {
                insert_at_head(head, v);
            }
            else
            {
                insert_in_position(head, pos, v);
            }
        }
        else if (op == 4)
        {
            int v;
            cin >> v;
            insert_at_head(head, v);
        }
        else if (op == 5)
        {
            break;
        }
    }

    return 0;
}
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

void insert_at_any_position(Node *head, int val, int position)
{
    Node *newNode = new Node(val);
    Node *temp = head;

    for (int i = 1; i <= position - 1; i++)
    {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next->prev = newNode->next;
    temp->next = newNode;
    newNode->prev = temp->next;
}

void insert_at_head(Node *&head, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        return;
    }

    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

void insert_at_tail(Node *&head, Node *&tail, int val)
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

int size(Node *head)
{
    Node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

void print_linkedList(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
}

void delete_at_any_position(Node *head, int position)
{
    Node *temp = head;
    for (int i = 1; i <= position - 1; i++)
    {
        temp = temp->next;
    }
    Node *delete_node = temp->next;
    temp->next = temp->next->next;
    temp->next->next->prev = temp->prev;
    delete delete_node;
}

void delete_at_head(Node *&head, Node *tail)
{
    Node *delete_node = head;
    head = head->next;
    head->prev = NULL;
    delete delete_node;
}

void delete_at_tail(Node *&head, Node *&tail)
{
    Node *delete_node = tail;
    tail = tail->prev;
    tail->next = NULL;
    delete delete_node;
}

void reverse_print(Node *tail)
{
    Node *temp = tail;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->prev;
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int choice;

    while (true)
    {
        cout << "\nOption 1: Print Linkedlist\n";
        cout << "Option 2: insert at any position\n";
        cout << "Option 3: insert at head\n";
        cout << "Option 4: insert at tail\n";
        cout << "Option 5: delete at any position\n";
        cout << "Option 6: delete at head\n";
        cout << "Option 7: delete at tail\n";
        cout << "Option 8: Print Reversely\n";
        cout << "Option 9: terminate the program\n";

        cin >> choice;

        if (choice == 1)
        {
            print_linkedList(head);
        }
        else if (choice == 2)
        {
            int val, position;
            cin >> val >> position;
            if (position >= size(head))
            {
                cout << "Invalid position" << endl;
            }
            else
            {
                insert_at_any_position(head, val, position);
            }
        }
        else if (choice == 3)
        {
            int val;
            cin >> val;
            insert_at_head(head, val);
        }
        else if (choice == 4)
        {
            int n, val;
            cout << "\nHow many elements you want to insert : " << endl;
            cin >> n;

            cout << "\nEnter the element that you want to add : " << endl;
            for (int i = 0; i < n; i++)
            {
                cin >> val;
                insert_at_tail(head, tail, val);
            }
        }
        else if (choice == 5)
        {
            int position;
            cout << "\nEnter the position that you want to delete : " << endl;
            cin >> position;
            delete_at_any_position(head, position);
        }
        else if (choice == 6)
        {
            delete_at_head(head, tail);
        }
        else if (choice == 7)
        {
            delete_at_tail(head, tail);
        }
        else if (choice == 8)
        {
            reverse_print(tail);
        }
        else if (choice == 9)
        {
            break;
        }
    }

    return 0;
}
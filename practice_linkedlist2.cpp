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

void insert_at_tail(Node *&head, int value)
{
    Node *newNode = new Node(value);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

void insert_at_head(Node *&head, int value)
{
    Node *newNode = new Node(value);
    newNode->next = head;
    head = newNode;
}

void insert_at_any_position(Node *&head, int value, int position)
{
    Node *newNode = new Node(value);
    Node *temp = head;
    for (int i = 1; i <= position - 1; i++)
    {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
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
    delete delete_node;
}

void delete_head(Node *&head)
{
    Node *delete_node = head;
    head = head->next;
    delete delete_node;
}

void delete_tail(Node *head)
{
    Node *temp = head;
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    Node *delete_Node = temp->next;
    temp->next = NULL;
    delete delete_Node;
}

void sort_linkedlist(Node *head)
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
}

void reverse_linkedlist(Node *head)
{
    if (head == NULL)
        return;
    reverse_linkedlist(head->next);
    cout << head->val << endl;
}

void print_linkedist(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
}

int main()
{
    Node *head = NULL;

    while (true)
    {
        int choice;
        cout << "\nEnter you choice: " << endl;
        cout << "1.Print the linked list: " << endl;
        cout << "2.Insert at tail : " << endl;
        cout << "3.Insert at head : " << endl;
        cout << "4.insert at any position : " << endl;
        cout << "5.delete from any position : " << endl;
        cout << "6.delete at head : " << endl;
        cout << "7.delete at tail : " << endl;
        cout << "8.Input from user : " << endl;
        cout << "9.reverse the linkedlist : " << endl;
        cout << "10.sort the linkedlist : " << endl;
        cout << "11.terminate the program: " << endl;
        cin >> choice;

        if (choice == 1)
        {
            print_linkedist(head);
        }
        else if (choice == 2)
        {
            int value;
            cout << "Enter the value that you want to add : " << endl;
            cin >> value;
            insert_at_tail(head, value);
        }
        else if (choice == 3)
        {
            int value;
            cout << "Enter the value that you want to add : " << endl;
            cin >> value;
            insert_at_head(head, value);
        }
        else if (choice == 4)
        {
            int value, position;
            cout << "Enter the value that you want to add : " << endl;
            cin >> value;
            cout << "Enter the position where you want to add the value : " << endl;
            cin >> position;
            if (position == 0)
            {
                insert_at_head(head, value);
            }
            else
            {
                insert_at_any_position(head, value, position);
            }
        }
        else if (choice == 5)
        {
            int position;
            cout << "Enter the position where you want to delete the value : " << endl;
            cin >> position;
            delete_at_any_position(head, position);
        }
        else if (choice == 6)
        {
            delete_head(head);
        }
        else if (choice == 7)
        {
            delete_tail(head);
        }
        else if (choice == 8)
        {
            int number;
            cout << "enter the number of inputs : " << endl;
            cin >> number;
            for (int i = 1; i <= number; i++)
            {
                int value;
                cin >> value;
                insert_at_tail(head, value);
            }
        }
        else if (choice == 9)
        {
            reverse_linkedlist(head);
        }
        else if (choice == 10)
        {
            sort_linkedlist(head);
        }
        else if (choice == 11)
        {
            break;
        }
    }

    return 0;
}
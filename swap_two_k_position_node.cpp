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
    Node *swapNodes(Node *head, int k)
    {
        Node *temp = head;
        Node *kthNode = NULL;
        Node *backPtr = NULL;
        int count = 0, l = 0;
        while (temp != NULL)
        {
            count++;
            temp = temp->next;
        }
        temp = head;
        bool flag1 = false, flag2 = false;
        int k2 = count - k + 1;
        while (temp != NULL)
        {
            l++;
            if (l == k)
            {
                kthNode = temp;
                flag1 = true;
            }
            if (l == k2)
            {
                backPtr = temp;
                flag2 = true;
            }
            if (flag1 == true && flag2 == true)
            {
                break;
            }
            temp = temp->next;
        }

        swap(kthNode->val, backPtr->val);

        return head;
    }
};

int main()
{

    return 0;
}
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
int binaryToInteger(int n, Node *head)
{
    int sum = 0;
    while (head != NULL)
    {
        sum = sum * 2 + head->val;
        head = head->next;
    }
    return sum;
}
int main()
{

    return 0;
}
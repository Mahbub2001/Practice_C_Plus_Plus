#include <bits/stdc++.h>
using namespace std;

class BrowserHistory
{
public:
    class Node
    {
    public:
        string url;
        Node *next;
        Node *prev;
        Node(string url)
        {
            this->url = url;
            this->next = NULL;
            this->prev = NULL;
        }
    };
    Node *current = new Node("");
    BrowserHistory(string homepage)
    {
        current = new Node(homepage);
    }

    void visit(string url)
    {
        Node *newNode = new Node(url);
        current->next = newNode;
        newNode->prev = current;
        current = current->next;
    }

    string back(int steps)
    {
        while (current->prev != NULL && steps-- > 0)
        {
            current = current->prev;
        }
        return current->url;
    }

    string forward(int steps)
    {
        while (current->next != NULL && steps-- > 0)
        {
            current = current->next;
        }
        return current->url;
    }
};
int main()
{

    return 0;
}
/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */

// You have a browser of one tab where you start on the homepage and you can visit another url, get back in the history number of steps or move forward in the history number of steps.

// Implement the BrowserHistory class:

// BrowserHistory(string homepage) Initializes the object with the homepage of the browser.
// void visit(string url) Visits url from the current page. It clears up all the forward history.
// string back(int steps) Move steps back in history. If you can only return x steps in the history and steps > x, you will return only x steps. Return the current url after moving back in history at most steps.
// string forward(int steps) Move steps forward in history. If you can only forward x steps in the history and steps > x, you will forward only x steps. Return the current url after forwarding in history at most steps.
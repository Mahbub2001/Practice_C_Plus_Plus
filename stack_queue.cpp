// #include <bits/stdc++.h>
// using namespace std;

// class myStack
// {
// public:
//     list<int> l;
//     void push(int val)
//     {
//         l.push_back(val);
//     }
//     void pop()
//     {
//         l.pop_back();
//     }
//     int top()
//     {
//         return l.back();
//     }
//     int size()
//     {
//         return l.size();
//     }
//     bool empty()
//     {
//         if (l.size() == 0)
//         {
//             return true;
//         }
//         else
//             return false;
//     }
// };

// int main()
// {

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// class MyStack
// {
// private:
//     class Node
//     {
//     public:
//         int val;
//         Node *next;
//         Node *prev;
//         Node(int value)
//         {
//             this->val = value;
//             this->next = NULL;
//             this->prev = NULL;
//         }
//     };

//     Node *top;

// public:
//     MyStack() : top(NULL) {}

//     bool isEmpty()
//     {
//         return top == NULL;
//     }

//     void push_stack(int value)
//     {
//         Node *newNode = new Node(value);
//         if (isEmpty())
//         {
//             top = newNode;
//         }
//         else
//         {
//             newNode->next = top;
//             top->prev = newNode;
//             top = newNode;
//         }
//     }

//     int pop()
//     {
//         if (isEmpty())
//         {
//             return -1;
//         }
//         int value = top->val;
//         Node *temp = top;
//         top = top->next;
//         if (top != NULL)
//         {
//             top->prev = NULL;
//         }
//         delete temp;
//         return value;
//     }
// };

// class MyQueue
// {
// private:
//     class Node
//     {
//     public:
//         int val;
//         Node *next;
//         Node *prev;
//         Node(int value)
//         {
//             this->val = value;
//             this->next = NULL;
//             this->prev = NULL;
//         }
//     };

//     Node *front;
//     Node *last;

// public:
//     MyQueue()
//     {
//         front = NULL;
//         last = NULL;
//     }

//     bool isEmpty()
//     {
//         return front == NULL;
//     }

//     void push_queue(int value)
//     {
//         Node *newNode = new Node(value);
//         if (isEmpty())
//         {
//             front = last = newNode;
//         }
//         else
//         {
//             newNode->prev = last;
//             last->next = newNode;
//             last = newNode;
//         }
//     }

//     int remove()
//     {
//         if (isEmpty())
//         {
//             return -1;
//         }
//         int value = front->val;
//         Node *temp = front;
//         front = front->next;
//         if (front != NULL)
//         {
//             front->prev = NULL;
//         }
//         else
//         {
//             last = NULL;
//         }
//         delete temp;
//         return value;
//     }
// };

// int main()
// {
//     int N, M;
//     cin >> N >> M;

//     MyStack stack;
//     MyQueue queue;

//     for (int i = 0; i < N; i++)
//     {
//         int value;
//         cin >> value;
//         stack.push_stack(value);
//     }
//     for (int i = 0; i < M; i++)
//     {
//         int value;
//         cin >> value;
//         queue.push_queue(value);
//     }

//     bool isSame = true;
//     while (!stack.isEmpty() && !queue.isEmpty())
//     {
//         int stackValue = stack.pop();
//         int queueValue = queue.remove();
//         if (stackValue != queueValue)
//         {
//             isSame = false;
//             break;
//         }
//     }

//     if (!stack.isEmpty() || !queue.isEmpty())
//     {
//         isSame = false;
//     }

//     if (isSame)
//     {
//         cout << "YES" << endl;
//     }
//     else
//     {
//         cout << "NO" << endl;
//     }

//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// string check(int N, int M, int A[], int B[]) {
//     stack<int> myStack;
//     queue<int> myQueue;

//     for (int i = 0; i < N; i++) {
//         myStack.push(A[i]);
//     }
//     for (int i = 0; i < M; i++) {
//         myQueue.push(B[i]);
//     }
//     while (!myStack.empty() && !myQueue.empty()) {
//         int stack_top = myStack.top();
//         int front_queue = myQueue.front();

//         if (stack_top != front_queue) {
//             return "NO";
//         }

//         myStack.pop();
//         myQueue.pop();
//     }

//     if (myStack.empty() && myQueue.empty()) {
//         return "YES";
//     } else {
//         return "NO";
//     }
// }

// int main() {
//     int N, M;
//     cin >> N >> M;

//     int A[N];
//     int B[M];

//     for (int i = 0; i < N; i++) {
//         cin >> A[i];
//     }

//     for (int i = 0; i < M; i++) {
//         cin >> B[i];
//     }

//     string result = check(N, M, A, B);
//     cout << result << endl;

//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main() {
//     int Q;
//     cin >> Q;
//     queue<string> counter;

//     while (Q--) {
//         int input;
//         cin >> input;

//         if (input == 0) {
//             string name;
//             cin >> name;
//             counter.push(name);
//         } else if (input == 1) {
//             if (counter.empty()) {
//                 cout << "Invalid" << endl;
//             } else {
//                 string fp1 = counter.front();
//                 cout << fp1 << endl;
//                 counter.pop();
//             }
//         }
//     }

//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// bool check_validation(string s) {
//     stack<char> st;

//     for (char c : s) {
//         if (!st.empty() && st.top() != c)
//             st.pop();
//         else
//             st.push(c);
//     }

//     return st.empty();
// }

// int main() {
//     int T;
//     cin >> T;
//     cin.ignore();

//     while (T--) {
//         string s;
//         getline(cin, s);

//         if (check_validation(s))
//             cout << "YES" << endl;
//         else
//             cout << "NO" << endl;
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
char mixer(char c1, char c2)
{
    if ((c1 == 'R' && c2 == 'B') || (c1 == 'B' && c2 == 'R'))
        return 'P';
    else if ((c1 == 'R' && c2 == 'G') || (c1 == 'G' && c2 == 'R'))
        return 'Y';
    else if ((c1 == 'B' && c2 == 'G') || (c1 == 'G' && c2 == 'B'))
        return 'C';
    else
        return ' ';
}

string getFinal(string colors)
{
/* The line `stack<char> color_box;` is declaring a stack data structure named `color_box` that can
store characters (`char`). This stack will be used to store the colors during the mixing process. */
    stack<char> color_box;
    for (char color : colors)
    {
        /* This code checks if the `color_box` stack is not empty and if the top element of the stack is
        equal to the current color. If both conditions are true, it pops the top element from the
        stack. This is done to handle consecutive colors that are the same. */
        if (!color_box.empty() && color_box.top() == color)
        {
            color_box.pop();
        }
        else
        {
            /* This code block is responsible for mixing the colors in the `color_box` stack. It checks if
            the stack is not empty and if the top element of the stack can be mixed with the current
            color. If both conditions are true, it pops the top element from the stack and checks if the
            new top element is the same as the mixed color. If it is, it pops the top element again.
            Otherwise, it pushes the mixed color into the stack. If the conditions are not met, it simply
            pushes the current color into the stack. */
            if (!color_box.empty() && mixer(color_box.top(), color) != ' ')
            {
                char mixedColor = mixer(color_box.top(), color);
                color_box.pop();
                if (!color_box.empty() && color_box.top() == mixedColor)
                {
                    color_box.pop();
                }
                else
                {
                    color_box.push(mixedColor);
                }
            }
            else
            {
                color_box.push(color);
            }
        }
    }

    string result;
    while (!color_box.empty())
    {
        result = color_box.top() + result;
        color_box.pop();
    }
    return result;
}

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;

        string colors;
        cin >> colors;

        string final_colors = getFinal(colors);
        cout << final_colors << endl;
    }

    return 0;
}

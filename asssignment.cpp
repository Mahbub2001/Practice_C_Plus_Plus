// #include<bits/stdc++.h>
// using namespace std;

// class Node
// {
// public:
//     int val;
//     Node *left;
//     Node *right;
//     Node(int val)
//     {
//         this->val = val;
//         this->left = NULL;
//         this->right = NULL;
//     }
// };

// Node* take_input(){

//     int val;
//     cin>>val;
//     queue<Node*>q;
//     Node *root;
//     if (val == -1)
//     {
//         root = NULL;
//     }
//     else{
//         root= new Node(val);
//     }

//     if(root) q.push(root);

//     while(!q.empty()){

//         Node *f = q.front();
//         q.pop();

//         int l,r;
//         cin>>l>>r;
//         Node *myLeft;
//         Node *myRight;

//         if(l == -1){
//             myLeft = NULL;
//         }
//         else{
//             myLeft = new Node(l);
//         }
//         if(r == -1){
//             myRight = NULL;
//         }
//         else{
//             myRight = new Node(r);
//         }

//         f->left = myLeft;
//         f->right = myRight;

//         if(f->left) q.push(f->left);
//         if(f->right) q.push(f->right);

//     }
//     return root;

// }

// int get_sum(Node* root){
//     queue<Node*>q;
//     if(root)q.push(root);
//     long long sum = 0;

//     while (!q.empty())
//     {
//         Node* f = q.front();
//         q.pop();

//         sum+=f->val;

//         if(f->left) q.push(f->left);
//         if(f->right) q.push(f->right);
//     }
//     return sum;

// }

// int main()
// {

//     Node* root = take_input();
//     cout<<get_sum(root)<<endl;

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// class Node
// {
// public:
//     int val;
//     Node *left;
//     Node *right;
//     Node(int val)
//     {
//         this->val = val;
//         this->left = NULL;
//         this->right = NULL;
//     }
// };

// Node *take_input()
// {

//     int val;
//     cin >> val;
//     queue<Node *> q;
//     Node *root;
//     if (val == -1)
//     {
//         root = NULL;
//     }
//     else
//     {
//         root = new Node(val);
//     }

//     if (root)
//         q.push(root);

//     while (!q.empty())
//     {

//         Node *f = q.front();
//         q.pop();

//         int l, r;
//         cin >> l >> r;
//         Node *myLeft;
//         Node *myRight;

//         if (l == -1)
//         {
//             myLeft = NULL;
//         }
//         else
//         {
//             myLeft = new Node(l);
//         }
//         if (r == -1)
//         {
//             myRight = NULL;
//         }
//         else
//         {
//             myRight = new Node(r);
//         }

//         f->left = myLeft;
//         f->right = myRight;

//         if (f->left)
//             q.push(f->left);
//         if (f->right)
//             q.push(f->right);
//     }
//     return root;
// }

// void get_min_max(Node *root)
// {
//     queue<Node *> q;
//     if (root)
//         q.push(root);
//     int max_num = INT_MIN, min_num = INT_MAX;

//     while (!q.empty())
//     {
//         Node *f = q.front();
//         q.pop();

//         if (f->left == NULL && f->right == NULL)
//         {
//             max_num = max(f->val, max_num);
//             min_num = min(f->val, min_num);
//         }

//         if (f->left)
//             q.push(f->left);
//         if (f->right)
//             q.push(f->right);
//     }
//     cout << max_num << " " << min_num << endl;
// }

// int main()
// {

//     Node *root = take_input();
//     get_min_max(root);

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// class Node
// {
// public:
//     int val;
//     Node *left;
//     Node *right;
//     Node(int val)
//     {
//         this->val = val;
//         this->left = NULL;
//         this->right = NULL;
//     }
// };

// Node *take_input()
// {

//     int val;
//     cin >> val;
//     queue<Node *> q;
//     Node *root;
//     if (val == -1)
//     {
//         root = NULL;
//     }
//     else
//     {
//         root = new Node(val);
//     }

//     if (root)
//         q.push(root);

//     while (!q.empty())
//     {

//         Node *f = q.front();
//         q.pop();

//         int l, r;
//         cin >> l >> r;
//         Node *myLeft;
//         Node *myRight;

//         if (l == -1)
//         {
//             myLeft = NULL;
//         }
//         else
//         {
//             myLeft = new Node(l);
//         }
//         if (r == -1)
//         {
//             myRight = NULL;
//         }
//         else
//         {
//             myRight = new Node(r);
//         }

//         f->left = myLeft;
//         f->right = myRight;

//         if (f->left)
//             q.push(f->left);
//         if (f->right)
//             q.push(f->right);
//     }
//     return root;
// }

// void print(Node *root)
// {
//     if (root == NULL)
//         return;

//     queue<Node *> q;
//     stack<int> s;

//     q.push(root);

//     while (!q.empty())
//     {
//         Node *f = q.front();
//         q.pop();

//         s.push(f->val);

//         if (f->right)
//             q.push(f->right);

//         if (f->left )
//             q.push(f->left);
//     }

//     while (!s.empty())
//     {
//         cout << s.top() << " ";
//         s.pop();
//     }
// }

// int main()
// {

//     Node *root = take_input();
//     print(root);

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// class Node
// {
// public:
//     int val;
//     Node *left;
//     Node *right;
//     Node(int val)
//     {
//         this->val = val;
//         this->left = NULL;
//         this->right = NULL;
//     }
// };

// Node *take_input()
// {

//     int val;
//     cin >> val;
//     queue<Node *> q;
//     Node *root;
//     if (val == -1)
//     {
//         root = NULL;
//     }
//     else
//     {
//         root = new Node(val);
//     }

//     if (root)
//         q.push(root);

//     while (!q.empty())
//     {

//         Node *f = q.front();
//         q.pop();

//         int l, r;
//         cin >> l >> r;
//         Node *myLeft;
//         Node *myRight;

//         if (l == -1)
//         {
//             myLeft = NULL;
//         }
//         else
//         {
//             myLeft = new Node(l);
//         }
//         if (r == -1)
//         {
//             myRight = NULL;
//         }
//         else
//         {
//             myRight = new Node(r);
//         }

//         f->left = myLeft;
//         f->right = myRight;

//         if (f->left)
//             q.push(f->left);
//         if (f->right)
//             q.push(f->right);
//     }
//     return root;
// }

// void print(Node *root)
// {
//     int searchLevel;
//     cin >> searchLevel;
//     bool found = false;

//     queue<pair<Node *, int>> q;
//     q.push({root, 0});
//     while (!q.empty())
//     {
//         pair<Node *, int> p = q.front();
//         Node *node = p.first;
//         int level = p.second;
//         q.pop();

//         if (level == searchLevel)
//         {
//             cout << node->val << " ";
//             found = true;
//         }

//         if (node->left)
//             q.push({node->left, level + 1});
//         if (node->right)
//             q.push({node->right, level + 1});
//     }
//     if(!found){
//         cout<<"Invalid"<<endl;
//     }
// }

// int main()
// {

//     Node *root = take_input();
//     print(root);

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// class Node
// {
// public:
//     int val;
//     Node *left;
//     Node *right;
//     Node(int val)
//     {
//         this->val = val;
//         this->left = NULL;
//         this->right = NULL;
//     }
// };

// Node *take_input()
// {

//     int val;
//     cin >> val;
//     queue<Node *> q;
//     Node *root;
//     if (val == -1)
//     {
//         root = NULL;
//     }
//     else
//     {
//         root = new Node(val);
//     }

//     if (root)
//         q.push(root);

//     while (!q.empty())
//     {

//         Node *f = q.front();
//         q.pop();

//         int l, r;
//         cin >> l >> r;
//         Node *myLeft;
//         Node *myRight;

//         if (l == -1)
//         {
//             myLeft = NULL;
//         }
//         else
//         {
//             myLeft = new Node(l);
//         }
//         if (r == -1)
//         {
//             myRight = NULL;
//         }
//         else
//         {
//             myRight = new Node(r);
//         }

//         f->left = myLeft;
//         f->right = myRight;

//         if (f->left)
//             q.push(f->left);
//         if (f->right)
//             q.push(f->right);
//     }
//     return root;
// }

// void print(Node *root)
// {
//     int fullLevel = 0, count = 0;
//     queue<pair<Node *, int>> q;
//     q.push({root, 1});
//     while (!q.empty())
//     {
//         pair<Node *, int> p = q.front();
//         Node *node = p.first;
//         int level = p.second;
//         q.pop();

//         fullLevel = level;
//         count++;

//         if (node->left)
//             q.push({node->left, level + 1});
//         if (node->right)
//             q.push({node->right, level + 1});
//     }
//     if (count == ((pow(2,fullLevel)) - 1))
//     {
//         cout << "YES" << endl;
//     }
//     else
//     {
//         cout << "NO" << endl;
//     }
// }

// int main()
// {

//     Node *root = take_input();
//     print(root);

//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int> pq;//max heap
    // priority_queue<int,vector<int>,greater<>>pq;//min heap
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        pq.push(x);
    }

    while (!pq.empty())
    {
        cout << pq.top() << endl;//print the root
        pq.pop();//pop the  root.
    }

    return 0;
}
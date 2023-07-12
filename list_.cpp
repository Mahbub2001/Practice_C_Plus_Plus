#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> myList;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int m;
        cin >> m;
        myList.push_back(m);
    }

    for (auto it = myList.begin(); it != myList.end(); it++)
    {
        cout << *it << " ";
    }
    myList.sort();
    cout << endl;
    myList.unique();
    for (auto it = myList.begin(); it != myList.end(); it++)
    {
        cout << *it << " ";
    }
    // cout << endl;
    // myList.sort();
    // for (auto it = myList.begin(); it != myList.end(); it++)
    // {
    //     cout << *it << " ";
    // }
    // cout << endl;
    // myList.sort(greater<int>());
    // for (auto it = myList.begin(); it != myList.end(); it++)
    // {
    //     cout << *it << " ";
    // }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 6, 7};
    // int a = 200;
    // v.insert(v.begin() + 1, a);
    // for (int i : v)
    // {
    //     cout << i << endl;
    // }
    // v.insert(v.begin() + 3, 3, a);
    // for (int i : v)
    // {
    //     cout << i << endl;
    // }

    vector<int>v1={9,8};
    v.insert(v.end(),v1.begin(),v1.end());
        for (int i : v)
    {
        cout << i << endl;
    }

    return 0;
}
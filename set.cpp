#include <bits/stdc++.h>
using namespace std;
int main()
{
    set<int> s;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s.insert(x); // O(logn)
    }

    // soto theke boro sort kore dbe automatically
    //  for (auto it = s.begin(); it !=s.end(); it++)
    //  {
    //      cout<<*it<<endl;
    //  }

    // check ase kina
    if (s.count(10))
        cout << "Yes ase" << endl; // O(logN)
    else
        cout << "No" << endl;

    return 0;
}
//inorder e print kre bst er
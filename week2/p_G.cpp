#include <bits/stdc++.h>
using namespace std;
#define endl "\n";
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string a;
    int k;
    cin >> k;

    for (int i = 1; i <= 10000; i++)
    {
        a+=to_string(i);
    }
    cout<<a[k-1]<<endl;
    
    return 0;
}
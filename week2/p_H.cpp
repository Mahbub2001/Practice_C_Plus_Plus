#include <bits/stdc++.h>
using namespace std;
#define endl "\n";
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string a, b, c;
    cin >> a >> b >> c;
    string cmb = a + b;

    sort(cmb.begin(), cmb.end());
    sort(c.begin(), c.end());

    if(c == cmb){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;
#define endl "\n";
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s;
        cin >> s;
        int count = 0;

        size_t firstIndex = s.find('1');
        size_t lastIndex = s.rfind('1');

        for (int i = firstIndex; i < lastIndex; i++)
        {
            if(s[i] == '0'){
                count++;
            }
        }
        
        cout << count << endl;
    }

    return 0;
}
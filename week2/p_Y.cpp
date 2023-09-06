#include <bits/stdc++.h>
using namespace std;
#define endl "\n";
int main()
{
    ios_base::sync_with_stdio(false);
    // cin.tie(0);
    // cout.tie(0);

    string s;
    while (cin >> s)
    {
        int n = s.length();
        set<string> str;

        for (int i = 0; i < n; i++)
        {
            for (int j = i; j < n; j++)
            {
                bool isPalindrome = true;

                for (int k = 0; k < (j - i + 1) / 2; k++)
                {
                    if (s[i + k] != s[j - k])
                    {
                        isPalindrome = false;
                        break;
                    }
                }

                if (isPalindrome)
                {
                    str.insert(s.substr(i, j - i + 1));
                }
            }
        }

        cout << "The string '" << s << "' contains " << str.size() << " palindromes." << endl;
    }

    return 0;
}
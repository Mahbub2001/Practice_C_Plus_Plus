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
    while (t--)
    {
        char arr[11][11];

        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                cin >> arr[i][j];
            }
        }
        int count = 0;
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                if (i == 0 || j == 0 || i == 9 || j == 9)
                {
                    if (arr[i][j] == 'X')
                    {
                        count += 1;
                    }
                }
                else if (i == 1 || j == 1 || i == 8 || j == 8)
                {
                    if (arr[i][j] == 'X')
                    {
                        count += 2;
                    }
                }
                else if (i == 2 || j == 2 || i == 7 || j == 7)
                {
                    if (arr[i][j] == 'X')
                    {
                        count += 3;
                    }
                }
                else if (i == 3 || j == 3 || i == 6 || j == 6)
                {
                    if (arr[i][j] == 'X')
                    {
                        count += 4;
                    }
                }
                else if (i == 4 || j == 4 || i == 5 || j == 5)
                {
                    if (arr[i][j] == 'X')
                    {
                        count += 5;
                    }
                }
            }
        }
        cout << count << endl;
    }

    return 0;
}
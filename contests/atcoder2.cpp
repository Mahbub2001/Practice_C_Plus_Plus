// 4

// // 3
#include <bits/stdc++.h>
using namespace std;
#define endl "\n";
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long long N, D, P;
    cin >> N >> D >> P;
    vector<long long> v(N);
    long long int result = 0, f = 0, m = 0;
    int i = 0;
    for (int i = 0; i < N; ++i)
    {
        cin >> v[i];
    }
    sort(v.rbegin(), v.rend());

    while (i < N)
    {
        int j = i;
        while (j < i + D && j < N)
        {
            f += v[j];
            j++;
        }
        m += P;
        result += min(m, f);
        i = j;
        f = 0;
        m = 0;
    }
    cout << result << endl;

    return 0;
}

// // 2
#include <bits/stdc++.h>
using namespace std;
#define endl "\n";
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int N;
    cin >> N;

    vector<vector<int>> sh(N, vector<int>(4));

    for (int i = 0; i < N; i++)
    {
        cin >> sh[i][0] >> sh[i][1] >> sh[i][2] >> sh[i][3];
    }

    vector<vector<bool>> gr(101, vector<bool>(101, false));

    for (int i = 0; i < N; i++)
    {
        for (int x = sh[i][0]; x < sh[i][1]; x++)
        {
            for (int y = sh[i][2]; y < sh[i][3]; y++)
            {
                gr[x][y] = true;
            }
        }
    }

    int area = 0;

    for (int x = 0; x <= 100; x++)
    {
        for (int y = 0; y <= 100; y++)
        {
            if (gr[x][y])
            {
                area++;
            }
        }
    }

    cout << area << endl;

    return 0;
}

// 1
// #include <bits/stdc++.h>
// using namespace std;
// #define endl "\n";
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);
//     cout.tie(0);

//     long long N, M, P;
//     cin >> N >> M >> P;

//     long long days = 0;

//     for (long long day = M; day <= N; day += P) {
//         days++;
//     }

//     cout << days << endl;

//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
#define endl "\n";
const int MOD = 1e9 + 7;

int count_sub(vector<int> &nums, int diff)
{
    int n = nums.size();
    int total = 0;

    for (int num : nums)
    {
        total += num;
    }
    if ((total + diff) % 2 != 0 || diff > total)
    {
        return 0;
    }

    int target = (total + diff) / 2;
    vector<vector<int>> dp(n + 1, vector<int>(target + 1, 0));
    for (int i = 0; i <= n; i++)
    {
        dp[i][0] = 1;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= target; j++)
        {
            if (nums[i - 1] <= j)
            {
                dp[i][j] = (dp[i - 1][j] + dp[i - 1][j - nums[i - 1]]) % MOD;
            }
            else
            {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }

    return dp[n][target];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, diff;
        cin >> n >> diff;

        vector<int> nums(n);
        for (int i = 0; i < n; i++)
        {
            cin >> nums[i];
        }

        int count = count_sub(nums, diff);
        cout << count << endl;
    }

    return 0;
}

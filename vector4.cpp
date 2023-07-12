// #include<bits/stdc++.h>
// using namespace std;
// int main() {
//     int n;
//     cin >> n;
//     vector<int> arr(n);
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
//     int count = 0;
//     sort(arr.begin(), arr.end());
//     for (int i = 0; i < arr.size() - 1; i++) {
//         if (binary_search(arr.begin(), arr.end(), arr[i] + 1)) {
//             count++;
//         }
//     }

//     cout << count << endl;

//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int count = 0;
    sort(arr.begin(), arr.end());
    for (int i = 0; i < arr.size() - 1; i++)
    {
        auto it = find(arr.begin(), arr.end(), arr[i]+1);
        if (it != arr.end())
            count++;
    }

    cout << count << endl;

    return 0;
}

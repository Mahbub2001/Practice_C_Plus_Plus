// #include <iostream>
// #include <vector>

// using namespace std;

// int main() {
//     int M;
//     cin >> M;

//     vector<int> D(M);
//     for (int i = 0; i < M; ++i) {
//         cin >> D[i];
//     }

//     int totalDays = 0;
//     for (int i = 0; i < M; ++i) {
//         totalDays += D[i];
//     }

//     int middleDay = (totalDays + 1) / 2;

//     int month = 1, day = 1;
//     for (int i = 0; i < M; ++i) {
//         if (middleDay > D[i]) {
//             middleDay -= D[i];
//             ++month;
//         } else {
//             day = middleDay;
//             break;
//         }
//     }

//     cout << month << " " << day << endl;

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// const int MAX_N = 300005;
// const int MAX_S = 1000000000;

// int main() {
//     int n;
//     cin >> n;

//     vector<vector<int>> ice(MAX_N, vector<int>(2, 0));
//     vector<int> maxdel(MAX_N, 0);

//     for (int i = 1; i <= n; i++) {
//         int x, y;
//         cin >> x >> y;

//         if (y > ice[x][0]) {
//             ice[x][1] = ice[x][0];
//             ice[x][0] = y;
//         } else if (y > ice[x][1]) {
//             ice[x][1] = y;
//         }

//         maxdel[x] = max(maxdel[x], y);
//     }

//     int ans = 0;
//     int mx1 = 0, mx2 = 0;

//     for (int i = 1; i <= n; i++) {
//         if (ice[i][0] > mx1) {
//             mx2 = mx1;
//             mx1 = ice[i][0];
//         } else if (ice[i][0] > mx2) {
//             mx2 = ice[i][0];
//         }

//         ans = max(ans, ice[i][0] + ice[i][1] / 2);
//     }

//     cout << max(ans, mx1 + mx2) << endl;

//     return 0;
// }


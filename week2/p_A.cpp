#include <bits/stdc++.h>
using namespace std;
#define endl "\n";

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, q;
    cin >> n >> q;

    vector<int> v[n]; 
    vector<int> rs;
    int lastAnswer = 0;

    for (int i = 0; i < q; ++i) {
        int cmd, x, y;
        cin >> cmd >> x >> y;

        int idx = (x ^ lastAnswer) % n;
        if (cmd == 1) {
            v[idx].push_back(y);
        } else if (cmd == 2) {
            int size = v[idx].size();
            int elementIdx = y % size; 
            lastAnswer = v[idx][elementIdx];
            rs.push_back(lastAnswer);
        }
    }
    
    for (int ans : rs) {
        cout << ans << endl;
    }

    return 0;
}

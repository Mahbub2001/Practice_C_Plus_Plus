#include <bits/stdc++.h>
using namespace std;
#define endl "\n";

vector<int> parseInts(string str)
{
    vector<int> result;
    stringstream ss(str);
    char comma;
    int num;

    while (ss >> num)
    {
        result.push_back(num);
        ss >> comma;
    }

    return result;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string input;
    cin >> input;

    vector<int> integers = parseInts(input);

    for (int num : integers)
    {
        cout << num << endl;
    }

    return 0;
}

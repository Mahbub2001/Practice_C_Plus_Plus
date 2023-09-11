#include <bits/stdc++.h>
using namespace std;
#define endl "\n";

int generate_number(const string &str)
{
    int count = 0;
    for (char c : str)
    {
        if (islower(c))
        {
            count += (c - 'a' + 1);
        }
        else
        {
            count += (c - 'A' + 27);
        }
    }
    return count;
}

bool isPrime(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
            break;
        }
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);

    string str;
    while (cin >> str)
    {
        int number = generate_number(str);
        if (isPrime(number))
        {
            cout << "It is a prime word." << endl;
        }
        else
        {
            cout << "It is not a prime word." << endl;
        }
    }

    return 0;
}
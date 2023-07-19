#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<string, int> mp;

    // insert korar way-1
    //  mp.insert({"sakib all hasan", 75});
    //  mp.insert({"tamim iqbal", 19});
    //  mp.insert({"mahbub", 100});
    //  mp.insert({"Shamim", 79});

    // insert korar way-2
    mp["Shakib al hasan"] = 79;
    mp["akib"] = 100;
    mp["tamim"] = 79;

    // cout << mp["Shamim"] << endl;

    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }

    // check ase kina
    if (mp.count("Shamim"))
    {
        cout << "get it" << endl;
    }
    else
    {
        cout << "not get it" << endl;
    }

    return 0;
}

//nlog(n)


#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define cn(x) cin >> x
#define foi(i, s, e) for (int i = s; i < e; i++)
#define endl '\n'
#define Endl '\n'

void solve()
{
    string s, mainStr;
    cin >> s;
    int sz = s.size();
    for (int i = 0; i < sz; i++)
    {
        mainStr += "Yes";
    }

    // if (s == "YES" || s == "Yess" || s == "se")
    // {
    //     cout << "NO\n";
    //     return;
    // }

    // for (int i = 0; i < s.size() - 1; i++)
    // {
    //     if (s[i] == 's' && s[i + 1] == 'e')
    //     {
    //         cout << "NO\n";
    //         return;
    //     }
    // }

    string r1 = "YES", r2 = "Yess", r3 = "se";

    if (s.find(r1) != s.npos || s.find(r2) != s.npos || s.find(r3) != s.npos)
    {
        cout << "NO\n";
        return;
    }

    if (mainStr.find(s) != mainStr.npos)
    {
        cout << "YES\n";
        return;
    }
    cout << "NO\n";
}
int main()
{
    int t;
    cin >> t;
    // t = 1;
    while (t--)
    {
        // string s = "YesYes", cpy = "sY";

        // if (s.find(cpy) != s.npos)
        // {
        //     cout << "yes\n";
        // }
        // else
        // {
        //     cout << "NO\n";
        // }

        solve();
    }
    return 0;
}

////////////////////////////////////////////////////////////
/*
@ problem Link:
OR,
@ Problem Statement:

  https://codeforces.com/problemset/problem/1759/A

*/
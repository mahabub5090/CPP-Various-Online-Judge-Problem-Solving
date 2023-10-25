#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define cn(x) cin >> x
#define foi(i, s, e) for (int i = s; i < e; i++)
#define endl '\n'
#define Endl '\n'

void solve()
{
    string s;
    cin >> s;
    map<char, int> mp;
    if (s == "YES" || s == "Yess" || s == "se" || s[0] == 's' && s[1] == 'e')
    {
        cout << "NO\n";
        return;
    }
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'Y' || s[i] == 'e' || s[i] == 'y' || s[i] == 's')
        {
            continue;
        }
        else
        {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}
int main()
{
    int t;
    cin >> t;
    // t = 1;
    while (t--)
    {
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
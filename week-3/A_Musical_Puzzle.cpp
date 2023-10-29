#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define cn(x) cin >> x
#define foi(i, s, e) for (int i = s; i < e; i++)
#define endl '\n'
#define Endl '\n'

void solve()
{
    int n;
    cn(n);
    string s, c;
    cn(s);
    map<string, int> mp;
    for (int i = 0; i <= s.size() - 2; i++)
    {
        c.clear();
        c = s.substr(i, 2);
        mp[c]++;
    }
    // int dlt = 0;
    // for (auto val : mp)
    // {
    //     if (val.second > 1)
    //         dlt++;
    // }

    cout << mp.size() << Endl;
}
int main()
{
    int t;
    t = 1;
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

  https://codeforces.com/problemset/problem/1833/A

*/
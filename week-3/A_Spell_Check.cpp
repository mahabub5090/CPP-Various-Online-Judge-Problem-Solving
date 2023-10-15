#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define cn(x) cin >> x
#define foi(i, s, e) for (int i = s; i < e; i++)
#define endl '\n'
#define Endl '\n'

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    map<char, int> mp;
    bool fg = false;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'T' || s[i] == 'i' || s[i] == 'm' || s[i] == 'u' || s[i] == 'r')
            mp[s[i]]++;
        else
            fg = true;
    }
    if (mp.size() == 5)
    {

        for (auto val : mp)
        {
            if (val.second == 1)
                continue;
            fg = true;
        }
        (fg) ? cout << "NO\n" : cout << "YES\n";
    }
    else
        cout << "NO\n";
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
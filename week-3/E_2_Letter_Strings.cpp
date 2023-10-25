#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define cn(x) cin >> x
#define foi(i, s, e) for (int i = s; i < e; i++)
#define endl '\n'
#define Endl '\n'

void solve()
{
    ll n;
    cin >> n;

    vector<string> s(n);

    map<string, ll> mp;
    map<char, ll> mp1;
    map<char, ll> mp2;
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> s[i];
        mp[s[i]]++;
        mp1[s[i][0]]++;
        mp2[s[i][1]]++;
    }
    ll a, b;
    for (ll i = 0; i < n; i++)
    {
        string str = s[i];

        a = mp1[str[0]] - mp[str];
        b = mp2[str[1]] - mp[str];
        if (a > 0)
            ans += a;
        if (b > 0)
            ans += b;

        if (mp[str] > 0)
            mp[str]--;
        if (mp1[str[0]] > 0)
            mp1[str[0]]--;
        if (mp2[str[1]] > 0)
            mp2[str[1]]--;
    }
    cout << ans << Endl;
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

  https://codeforces.com/problemset/problem/1669/E

*/
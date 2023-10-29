#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define cn(x) scanf("%d", x)
#define foi(i, s, e) for (int i = s; i < e; i++)
#define endl '\n'
#define Endl '\n'

void solve()
{
    ll n;
    cin >> n;
    ll arr[n];

    map<ll, ll> mp;

    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
        mp[arr[i]]++;
    }

    sort(arr, arr + n);

    ll ans = 0;
   
    for (ll val : arr)
    {
        bool fg = false;

        while (mp[val] != 0)
        {
            mp[val]--;
            val++;
            if (!fg)
            {
                fg = true;
                ans++;
            }
        }
    }
    
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

  https://codeforces.com/problemset/problem/1790/D#

*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define cn(x) cin >> x
#define foi(i, s, e) for (int i = s; i < e; i++)
#define endl '\n'
#define Endl '\n'

void solve()
{
    ll n;
    cin >> n;
    ll arr[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    priority_queue<ll> pq;
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            pq.push(arr[i]);
        }
        else
        {

            if (!pq.empty())
            {

                ans += pq.top();
                pq.pop();
            }
        }
    }
    cout << ans << Endl;
}
int main()
{
    ll t;
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

  https://codeforces.com/problemset/problem/1800/C1

*/
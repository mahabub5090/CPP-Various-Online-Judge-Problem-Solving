#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define cn(x) cin >> x
#define foi(i, s, e) for (int i = s; i < e; i++)
#define endl '\n'
#define Endl '\n'
ll cal(string s)
{
    ll sum = 0;
    for (ll i = 0; i < s.size(); i++)
    {
        if (s[i] == 'L')
        {
            sum += i;
        }
        else
        {
            sum += (s.size() - i - 1);
        }
    }

    return sum;
}
void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    ll curr = cal(s);
    vector<ll> dlt;
    for (ll i = 0; i < s.size(); i++)
    {
        ll l = i;
        ll r = n - i - 1;
        ll mx = max(l, r), mn = min(l, r);
        if (s[i] == 'L' && l != mx && mx != mn)
        {
            s[i] = 'R';
            dlt.push_back((mx - mn));
        }
        else if (s[i] == 'R' && r != mx && mx != mn)
        {
            s[i] = 'L';
            dlt.push_back((mx - mn));
        }
    }
    sort(dlt.begin(), dlt.end(), greater<ll>());
    ll i = 0;
    for (char c : s)
    {
        if (i < dlt.size())
        {
            cout << curr + dlt[i] << " ";
            curr += dlt[i];
            i++;
        }
        else
        {
            cout << curr << " ";
        }
    }
    // ll Value = all[0];
    // cout << dlt.size();
    // cout << Value;
    cout << endl;
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

  https://codeforces.com/problemset/problem/1722/D?mobile=false

*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define cn(x) cin >> x
#define foi(i, s, e) for (int i = s; i < e; i++)
#define endl '\n'
#define Endl '\n'
bool cmp(pair<int, int> a, pair<int, int> b)
{
    return a.first < b.first;
}
void solve()
{
    int n, k;
    cin >> n >> k;
    int day[n], temp[n];
    vector<pair<int, int>> pir;
    for (int i = 0; i < n; i++)
    {
        cin >> day[i];
        pir.push_back({day[i], i});
    }
    for (int i = 0; i < n; i++)
    {
        cin >> temp[i];
    }
    sort(pir.begin(), pir.end(), cmp);
    sort(temp, temp + n);
    vector<int> ans(n);
    int idx;
    for (int i = 0; i < n; i++)
    {
        idx = pir[i].second;
        ans[idx] = temp[i];
    }

    for (int val : ans)
    {
        cout << val << " ";
    }

    cout << endl;
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

  https://codeforces.com/problemset/problem/1833/B

*/
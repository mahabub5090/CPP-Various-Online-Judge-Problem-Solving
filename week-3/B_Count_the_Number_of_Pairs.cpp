#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define cn(x) cin >> x
#define foi(i, s, e) for (int i = s; i < e; i++)
#define endl '\n'
#define Endl '\n'

void solve()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    map<char, int> mps, mpb;
    for (int i = 0; i < n; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            mps[s[i]]++;
        }
        else
        {
            // char bg = s[i] + ' ';
            // // cout << bg << " ";
            // mpb[bg]++;

            mpb[s[i] + 32]++;
        }
    }
    // cout << endl;
    // return;
    int ans = 0;
    int temp = 0;
    for (int i = 0; i < n; i++)
    {

        if (mps[s[i]] > 0 && mpb[s[i]] > 0)
        {
            temp = min(mps[s[i]], mpb[s[i]]);
            ans += temp;
            mps[s[i]] -= temp;
            mpb[s[i]] -= temp;
            // while (mps[s[i]] != 0 && mpb[s[i]] != 0)
            // {
            //     ans++;
            //     mps[s[i]]--;
            //     mpb[s[i]]--;
            // }
        }
    }
    int total = 0;
    for (auto val : mps)
    {
        if (val.second > 0)
            total += (val.second / 2);
    }
    for (auto val : mpb)
    {
        if (val.second > 0)
            total += (val.second / 2);
    }
    cout << ans + min(k, total) << Endl;
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

  https://codeforces.com/problemset/problem/1800/B

*/
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
    cin >> n;
    string s;
    cin >> s;
    int dlt = 0;
    for (int i = 0; i < s.size() - 2; i++)
    {
        (s[i] == s[i + 2]) ? dlt++ : dlt;
    }
    cout << (n - 1) - dlt << Endl;

    /*
    // OR,
     int ans=0;
      for (int i = 0; i < s.size() - 2; i++)
     {
         (s[i] == s[i + 2]) ? continue : ans++;
     }
     cout << ans<< Endl;
     */
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

  https://codeforces.com/problemset/problem/1800/D

*/
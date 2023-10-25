#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define cn(x) cin >> x
#define foi(i, s, e) for (int i = s; i < e; i++)
#define endl '\n'
#define Endl '\n'
string pi = "314159265358979323846264338327";
void solve()
{
    string cmp;
    cin >> cmp;
     int ans = 0;
    for (int i = 0; i < cmp.size() && i < 30; i++)
    {
        if (cmp[i] != pi[i])
            break;
        ans++;
    }

    cout << ans << endl;
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

  https://codeforces.com/problemset/problem/1790/A

*/
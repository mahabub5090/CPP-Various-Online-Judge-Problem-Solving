#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define cn(x) cin >> x
#define foi(i, s, e) for (int i = s; i < e; i++)
#define endl '\n'
#define Endl '\n'

void solve()
{
    int l, r, x, a, b;
    cin >> l >> r >> x >> a >> b;
    if (a == b)
    {
        cout << 0 << endl;
        return;
    }
    if (x > abs(l - r))
    {
        cout << -1 << endl;
        return;
    }
    if (abs(b - a) >= x)
    {
        cout << 1 << endl;
        return;
    }
    if (b > a)
    {

        if ((b + x) <= (r) || (a - x) >= (l))
        {
            cout << 2 << endl;
            return;
        }
        if ((a + x) <= (r) && (b - x) >= (l))
        {
            cout << 3 << endl;
            return;
        }
    }
    else
    {
        if ((a + x) <= (r) || (b - x) >= (l))

        {
            cout << 2 << endl;
            return;
        }

        if ((b + x) <= (r) && (a - x) >= (l))
        {
            cout << 3 << endl;
            return;
        }
    }
    cout << -1 << Endl;
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

  https://codeforces.com/problemset/problem/1759/C

*/
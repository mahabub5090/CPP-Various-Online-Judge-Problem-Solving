#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define cn(x) cin >> x
#define foi(i, s, e) for (int i = s; i < e; i++)
#define endl '\n'
#define Endl '\n'

void solve()
{
    int n, s, r;
    cin >> n >> s >> r;
    int last = s - r;
    vector<int> vc(n - 1);
    for (int i = 0; i < n - 1; i++)
    {
        vc[i] = 0;
    }

    while (r != 0)
    {
        for (int i = 0; i < n - 1; i++)
        {
            if (r == 0)
                break;
            vc[i]++;
            // vc[i] = vc[i] + 1;
            r--;
        }
    }
    cout << last << " ";

    for (int i = 0; i < n - 1; i++)
    {
        cout << vc[i] << " ";
    }
    cout << endl;
}
int main()
{
    int t;
    t = 1;
    cin >> t;
    // t=1
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

  https://codeforces.com/problemset/problem/1790/B

*/
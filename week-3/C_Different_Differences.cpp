#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define cn(x) cin >> x
#define foi(i, s, e) for (int i = s; i < e; i++)
#define endl '\n'
#define Endl '\n'

void solve()
{
    int k, n;
    cn(k);
    cn(n);
    vector<int> ans;
    int characteristic = 1;
    int num = 1;
    for (int i = 0; i < k; i++)
    {
        ans.push_back(num);

        // if (num + characteristic + 1 + (k - (i + 1 + 1)) <= n)
        if (num + characteristic + (k - (i + 1)) <= n)
        {
            characteristic++;
            num += characteristic;
        }
        else
        {
            num++;
        }
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

  https://codeforces.com/problemset/problem/1772/C

*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define cn(x) cin >> x
#define foi(i, s, e) for (int i = s; i < e; i++)
#define endl '\n'
#define Endl '\n'

void solve()
{
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int sum = 0, pi = i, pj = j;
            sum += arr[pi][pj];

            while (pi < n - 1 && pj < m - 1)
            {
                pi++;
                pj++;
                // if (pi != pj)
                //     continue;
                sum += arr[pi][pj];
            }
            pi = i, pj = j;
            while (pi > 0 && pj > 0)
            {
                pi--;
                pj--;
                // if (pi != pj)
                //     continue;
                sum += arr[pi][pj];
            }
            pi = i, pj = j;
            while (pi > 0 && pj < m - 1)
            {
                pi--;
                pj++;
                sum += arr[pi][pj];
            }
            pi = i, pj = j;
            while (pi < n - 1 && pj > 0)
            {
                pi++;
                pj--;
                sum += arr[pi][pj];
            }
            ans.push_back(sum);
        }
    }
    if (ans.empty())
    {
        cout << 0 << Endl;
        return;
    }
    sort(ans.begin(), ans.end());
    reverse(ans.begin(), ans.end());
    cout << ans[0]<<endl;
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

  https://codeforces.com/problemset/problem/1676/D

*/


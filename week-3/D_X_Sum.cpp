#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define cn(x) cin >> x
#define foi(i, s, e) for (int i = s; i < e; i++)
#define endll cout << '\n'
// #define vcmax(a) sort(a.begin(), a.end()) && reverse(a.begin(), a.end())

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
    vector<pair<int, int>> pt;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            pt.push_back({i, j});
        }
    }

    if (pt.empty())
    {
        cout << 0 << endl;
    }
    else
    {
        vector<int> ans;
        for (auto path : pt)
        {

            int sum = 0;

            int i = path.first;
            int j = path.second;

            sum += arr[i][j];

            int pi = i, pj = j;

            while (pi > 0 && pj > 0)
            {
                pi--;
                pj--;

                if (pi != pj)
                    continue;
                sum += arr[pi][pj];
            }

            pi = i;
            pj = j;
            while (pi < n - 1 && pj < m - 1)
            {
                pi++;
                pj++;

                if (pi != pj)
                    continue;
                sum += arr[pi][pj];
            }

            pi = i;
            pj = j;
            while (pi < n - 1 && pj > 0)
            {
                pi++;
                pj--;
                sum += arr[pi][pj];
            }

            pi = i;
            pj = j;
            while (pi > 0 && pj < m - 1)
            {
                pi--;
                pj++;
                sum += arr[pi][pj];
            }

            ans.push_back(sum);
        }

        sort(ans.begin(), ans.end());
        reverse(ans.begin(), ans.end());
        cout << ans[0] << endl;
    }
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
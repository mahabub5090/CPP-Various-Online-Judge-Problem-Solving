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

    vector<vector<int>> vc(n, vector<int>(n - 1));

    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n - 1; j++)
        {
            cin >> vc[i][j];
            if (j == 0)
                mp[vc[i][j]]++;
        }
    }
    // for (int i = 0; i < n; i++)
    // {

    //     for (int j = 0; j < n - 1; j++)
    //     {
    //         cout << vc[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    vector<pair<int, int>> fast;
    for (auto val : mp)
    {
        fast.push_back({val.first, val.second});
    }

    int fst;
    if (fast[0].second > fast[1].second)
        fst = fast[0].first;
    else
        fst = fast[1].first;

    cout << fst << " ";

    for (int i = 0; i < n; i++)
    {
        if (vc[i][0] == fst)
            continue;
        else
        {
            for (int j = 0; j < n - 1; j++)
            {
                cout << vc[i][j] << " ";
            }
        }
    }
    
    cout << Endl;
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

  https://codeforces.com/problemset/problem/1790/C

*/
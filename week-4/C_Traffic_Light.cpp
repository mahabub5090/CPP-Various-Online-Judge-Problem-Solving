////////////////////////////////////////////////////////////
/*
@ problem Link:
OR,
@ Problem Statement:

  https://codeforces.com/problemset/problem/1744/C

*/
/*
**************************************************************
*Bis'Millah Hir Rah'Manir Rahim == start with the name of \n*
*                    ALLAH Subhana Tayala                    *
*                Author: Md. Mahabubar Rahman                *
*               CSE,RPI && Rangpur, Bangladesh               *
**************************************************************
*/
#include <bits/stdc++.h>
using namespace std;
#define Allhamdulillah 0
#define pb(x) push_back(x)
#define pop() pop_back()
#define ll long long int
#define foi(i, s, e) for (int i = s; i < e; i++)
#define cn(x) cin >> x
#define endl '\n'
#define Endl '\n'
#define nl cout << '\n'
#define yes cout << "YES\n"
#define no cout << "NO\n"

void solve()
{
    int n;
    char c;
    cin >> n >> c;
    string s;
    cin >> s;
    if (c == 'g')
    {
        cout << 0 << endl;
        return;
    }

    int suffix[n];
    if (s[n - 1] == 'g')
    {
        suffix[n - 1] = n - 1;

        // cout << n - 1 << "-- " << suffix[n - 1] << endl;
    }
    else
        suffix[n - 1] = -1;

    for (int i = n - 2; i >= 0; i--)
    {
        if (s[i] == 'g')
            suffix[i] = i;
        else
            suffix[i] = suffix[i + 1];
    }
    // for (auto val : suffix)
    // {
    //     cout << val << " ";
    // }
    // nl;
    // return;
    vector<int> vc;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == c)
        {
            if (suffix[i] == -1)
                vc.push_back((n - i) + suffix[0]);
            else
                vc.push_back(suffix[i] - i);
        }
    }
    sort(vc.begin(), vc.end(), greater<>());
    cout << vc[0] << endl;
}
/*mdmahabub55*/
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t = 1;
    cin >> t;
    // t = 1;

    while (t--)
    {
        solve();
    }
    return Allhamdulillah;
}
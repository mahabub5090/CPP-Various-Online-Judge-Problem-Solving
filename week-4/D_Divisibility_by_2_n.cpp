////////////////////////////////////////////////////////////
/*
@ problem Link:
OR,
@ Problem Statement:

  https://codeforces.com/problemset/problem/1744/D

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
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        while (arr[i] % 2 == 0)
        {
            cnt++;
            arr[i] /= 2;
        }
    }
    vector<int> vc;
    for (int i = 2; i <= n; i++)
    {
        int cpi = i, ci = 0;
        while (cpi % 2 == 0)
        {
            ci++;
            cpi /= 2;
        }
        if (ci != 0)
            vc.pb(ci);
    }
    sort(vc.rbegin(), vc.rend());
    int ans = 0;
    // cout << vc.size() << Endl;
    // return;
    for (int i = 0; i < vc.size() && n > cnt; i++)
    {
        cnt += vc[i];
        ans++;
    }
    if (cnt < n)
        cout << -1 << endl;
    else
        cout << ans << Endl;
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
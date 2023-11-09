////////////////////////////////////////////////////////////
/*
@ problem Link:
OR,
@ Problem Statement:

  https://www.codechef.com/problems/MOONSOON

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

    ll n, m, h;
    cin >> n >> m >> h;
    ll an[n], am[m];
    for (ll i = 0; i < n; i++)
    {
        cin >> an[i];
    }
    for (ll i = 0; i < m; i++)
    {
        cin >> am[i];
    }
    sort(an, an + n);
    reverse(an, an + n);
    sort(am, am + m);
    reverse(am, am + m);
    ll ans = 0, lp = min(n, m);
    for (ll i = 0; i < lp; i++)
    {
        ans += min(an[i], am[i] * h);
    }
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
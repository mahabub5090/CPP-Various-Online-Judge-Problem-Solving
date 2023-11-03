////////////////////////////////////////////////////////////
/*
@ problem Link:
OR,
@ Problem Statement:
   https://codeforces.com/problemset/problem/1741/A
*/
////////////////////////////////////////////////////////////

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

#define sm cout << "<\n"
#define bg cout << ">\n"

void solve()
{

    string a, b;
    cin >> a >> b;

    if (a == b)
    {
        cout << "=" << endl;
        return;
    }
    int al = a[a.size() - 1], bl = b[b.size() - 1];
    if (al == bl)
    {
        if (al == 'S')
            (a.size() > b.size()) ? sm : bg;
        else if (al == 'L')
            (a.size() > b.size()) ? bg : sm;
        return;
    }

    if (al == 'S')
    {
        sm;
        return;
    }
    if (bl == 'S')
    {
        bg;
        return;
    }
    if (al == 'L' && bl == 'M')
    {
        bg;
        return;
    }
    else
    {
        sm;
        return;
    }
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
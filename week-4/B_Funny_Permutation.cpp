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
//Accepted
void solve()
{

    int a;
    cin >> a;
    if (a == 3)
    {
        cout << -1 << endl;
        return;
    }
    if (a % 2 == 0)
    {
        for (int i = a; i > 0; i--)
        {
            cout << i << " ";
        }
        nl;
        return;
    }

    int mid = (a / 2) + 1;
    for (int i = mid; i <= a; i++)
    {
        cout << i << " ";
    }
    for (int i = 1; i < mid; i++)
    {
        cout << i << " ";
    }
    nl;
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
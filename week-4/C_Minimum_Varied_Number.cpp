////////////////////////////////////////////////////////////
/*
@ problem Link:
OR,
@ Problem Statement:

  https://codeforces.com/problemset/problem/1714/C

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
    vector<int> num = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    vector<int> vc;

    for (int i = 0; i < num.size(); i++)
    {
        if (n <= num[i] && n > 0)
        {
            vc.pb(n);
            break;
        }
        else
        {
            n -= num[i];
            vc.pb(num[i]);
        }
    }
    for (int i = vc.size() - 1; i >= 0; i--)
    {
        if (vc[i] > 9)
            continue;
        cout << vc[i];
    }
    cout << endl;
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
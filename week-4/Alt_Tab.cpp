////////////////////////////////////////////////////////////
/*
@ problem Link:
OR,
@ Problem Statement:

  https://www.codechef.com/problems/ALTTAB

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
    vector<string> vc;
    while (n--)
    {
        string s;
        cin >> s;
        vc.pb(s);
    }

    reverse(vc.begin(), vc.end());
    string out = "";
    map<string, int> mp;
    for (int i = 0; i < vc.size(); i++)
    {
        if (mp[vc[i]] == 0)
        {
            out += vc[i][vc[i].size() - 2];
            out += vc[i][vc[i].size() - 1];
            // out += vc[i].substr(vc[i].size() - 2, 2); //worked;
        }
        mp[vc[i]]++;
    }
    cout << out << endl;
}
/*mdmahabub55*/
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t = 1;
    // cin >> t;
    // t = 1;

    while (t--)
    {
        solve();
    }
    return Allhamdulillah;
}
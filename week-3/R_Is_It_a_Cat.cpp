#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define cn(x) cin >> x
#define foi(i, s, e) for (int i = s; i < e; i++)
#define endl '\n'
#define Endl '\n'
/*
think for this test-case
1
6
MEOEMW

answer will be "NO";
*/
void solve()
{

    int n;
    cin >> n;
    string s;
    cin >> s;
    string ls = "";
    for (int i = 0; i < s.size(); i++)
    {
        if (isupper(s[i]))
        {
            s[i] = tolower(s[i]);
        }
        ls += s[i];
    }
    // cout << ls << endl;
    string cmp = "";
    char pre = ' ';
    for (int i = 0; i < n; i++)
    {
        if (pre == s[i])
            continue;
        cmp += s[i];
        pre = s[i];
    }

    // cout << cmp << endl;
    // return;

    if (cmp == "meow" && cmp.size() == 4)
        cout << "YES\n";
    else
        cout << "NO\n";
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
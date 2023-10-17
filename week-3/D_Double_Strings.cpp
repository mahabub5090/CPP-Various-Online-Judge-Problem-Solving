#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb() push_back()
#define cn(x) cin >> x
#define endl '\n'
#define Endl '\n'

void solve()
{
    int n;
    cin >> n;
    vector<string> vc(n);
    map<string, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> vc[i];
        mp[vc[i]]++;
    }

    vector<char> c;

    for (string cmp : vc)
    {
        int sum = 0;
        int range = cmp.size();
        bool fg = false;
        for (int i = 0, j = 1; i < range; i++, j++)
        {
            sum = 0;
            string a, b;
            a = cmp.substr(0, j);
            b = cmp.substr(j, range);
            // cout << a << " " << b << Endl;
            if (mp[a] > 0)
                sum++;
            if (mp[b] > 0)
                sum++;
            if (fg == true)
                continue;
            if (sum == 2)
            {
                c.push_back('1');
                fg = true;
            }
        }
        if (fg != true)
            c.push_back('0');
    }

    for (char i : c)
    {
        cout << i;
    }
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    // int t = 1;
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

  https://codeforces.com/problemset/problem/1703/D

*/
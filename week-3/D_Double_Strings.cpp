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
    for (int i = 0; i < n; i++)
    {
        cin >> vc[i];
    }
    vector<string> plus;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            string str = vc[i] + vc[j];
            plus.push_back(str);
        }
    }
    vector<char> c;
    for (string cmp : vc)
    {
        int sub = 0;
        for (int i = 0; i < plus.size(); i++)
        {
            if (cmp == plus[i])
                sub++;
        }

        if (sub >= 1)
            c.push_back('1');
        else
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

  https://codeforces.com/problemset/problem/1703/D

*/
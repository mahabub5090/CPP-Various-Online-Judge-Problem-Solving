#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define cn(x) cin >> x
#define foi(i, s, e) for (int i = s; i < e; i++)
#define endl '\n'
#define Endl '\n'

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<char> vc, ans;
    for (int i = 0; i < s.size(); i++)
    {
        if (isupper(s[i]))
        {
            s[i] = tolower(s[i]);
        }
        vc.push_back(s[i]);
    }
    for (char c : vc)
    {
        auto i = find(ans.begin(), ans.end(), c);
        if (i == ans.end())
        {
            ans.push_back(c);
        }
    }
    string cmp;
    for (auto c : ans)
    {
        cmp += c;
    }
    if (cmp == "meow")
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
    return 0;}
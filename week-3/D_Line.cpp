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
    string dir;
    cin >> dir;
    vector<int> ld, rd;
    for (int i = 0; i < n; i++)
    {
        if (dir[i] == 'L')
            ld.push_back(i);
        else
            rd.push_back(i);
    }
    for (int i : ld)
    {
        cout << i << " ";
    }
    cout << "--";
    for (int i : rd)
    {
        cout << i << " ";
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
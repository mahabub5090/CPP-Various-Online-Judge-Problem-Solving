#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define cn(x) cin >> x
#define foi(i, s, e) for (int i = s; i < e; i++)
#define endl '\n'
#define Endl '\n'

void solve()
{
    int n, sum;
    cin >> n >> sum;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    vector<int> miss;
    sort(arr, arr + n);
    int curr = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] + 1 == arr[i + 1])
            continue;
        curr = arr[i] + 1;
        miss.push_back(curr);
    }

    for (auto val : miss)
    {
        cout << val << " ";
    }
    cout << endl;
}
int main()
{
    int t;
    t = 1;
    cin >> t;
    // t = 1;
    while (t--)
    {
        solve();
    }
    return 0;
}
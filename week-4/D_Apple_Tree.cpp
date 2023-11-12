////////////////////////////////////////////////////////////
/*
@ problem Link:
OR,
@ Problem Statement:

  https://codeforces.com/problemset/problem/1843/D

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
#define pp() pop_back()
#define ll long long int
#define foi(i, s, e) for (int i = s; i < e; i++)
#define cn(x) cin >> x
#define endl '\n'
#define Endl '\n'
#define nl cout << '\n'
#define yes cout << "YES\n"
#define no cout << "NO\n"

const ll N = 1e6 + 5;
vector<ll> adj[N];
bool visited[N];
ll dist[N];
void dfs(int src)
{
  // cout << src << Endl;
  visited[src] = true;
  bool leaf = true;
  for (int child : adj[src])
  {
    if (!visited[child])
    {
      leaf = false;
      dfs(child);
      dist[src] += dist[child];
    }
  }
  if (leaf)
  {
    dist[src] = 1;
  }
}
void solve()
{
  int n;
  cin >> n;

  for (int i = 0; i <= n; i++)
  {
    adj[i].clear();
    dist[i] = 0;
    visited[i] = false;
  }
  // fill(visited, visited + N, false);
  // fill(dist, dist + N, 0);

  for (int i = 0; i < n - 1; i++)
  {
    int u, v;
    cin >> u >> v;
    adj[u].push_back(v);
    adj[v].push_back(u);
  }
  dfs(1);
  int q;
  cin >> q;
  while (q--)
  {
    ll a, b;
    cin >> a >> b;
    // ll ans = ((1ll) * dist[a]) * ((1ll) * dist[b]);
    cout << dist[a] * dist[b] << endl;
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
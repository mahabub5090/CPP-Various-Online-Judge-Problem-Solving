#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define cn(x) cin >> x
#define foi(i, s, e) for (int i = s; i < e; i++)
#define endl '\n'
#define Endl '\n'
#define yes cout << "YES\n"
#define no cout << "NO\n"

void solve()
{
    int a = 2, b = 2;
    int matrix[a][b];
    int ans = 0;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cin >> matrix[i][j];
        }
    }
    for (int i = 0; i < 4; i++)
    {
        if (matrix[0][0] < matrix[0][1]
         && matrix[0][1] < matrix[1][1] 
         && matrix[0][0] < matrix[1][0] 
         && matrix[1][0] < matrix[1][1])
        {
            ans++;
        }
        swap(matrix[0][0], matrix[0][1]);
        swap(matrix[0][0], matrix[1][0]);
        swap(matrix[1][0], matrix[1][1]);
    }
/*
42 29
73 1

73 42
1 29

1 73
29 42

29 1
42 73

*/
    ans > 0 ? yes : no;
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

////////////////////////////////////////////////////////////
/*
@ problem Link:
OR,
@ Problem Statement:

  https://codeforces.com/problemset/problem/1772/B

*/
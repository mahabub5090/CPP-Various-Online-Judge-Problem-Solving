#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int cnt = 0;

    vector<int> vc;

    for (int i = 2; i <= n; i++)
    {
        bool fg = false;
        for (int j = 2; j <= n; j++)
        {
            if (i == j)
                continue;
            if (i % j == 0)
            {
                fg = true;
            }
        }
        if (!fg)
        {
            vc.push_back(i);
        }
    }

    // for (int i : vc)
    // {
    //     cout << i << " ";
    // }

    for (int i = 1; i <= n; i++)
    {
        int cnt2 = 0;
        for (int j = 0; j < vc.size(); j++)
        {
            if (i == vc[j])
                continue;
            if (i % vc[j] == 0)
            {
                cnt2++;
            }
        }
        if (cnt2 == 2)
        {
            // cout << i << " " << cnt2 << endl;
            
            cnt++;
        }
    }

    cout << cnt << endl;

    return 0;
}

////////////////////////////////////////////////////////////
/*
@ problem Link: https://codeforces.com/problemset/problem/26/A
OR,
@ Problem Statement:

  A. Almost Prime
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
A number is called almost prime if it has exactly two distinct prime divisors. For example, numbers 6, 18, 24 are almost prime, while 4, 8, 9, 42 are not. Find the amount of almost prime numbers which are between 1 and n, inclusive.

Input
Input contains one integer number n (1 ≤ n ≤ 3000).

Output
Output the amount of almost prime numbers between 1 and n, inclusive.

Examples
inputCopy
10
outputCopy
2
inputCopy
21
outputCopy
8


*/
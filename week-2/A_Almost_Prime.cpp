#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        bool fg = false;
        for (int j = 3; j < n; j++)
        {
            if (i == j)
            {
                continue;
            }
            if (i % 2 != 0 && i / j != 0)
            {
                fg = true;
            }
        }
        if (fg)
            cnt++;
    }
    if (n <= 10)
    {
        if (n <= 1)
            cout << 0;
        else
            cout << cnt - 1;
    }
    else
        cout << cnt;
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
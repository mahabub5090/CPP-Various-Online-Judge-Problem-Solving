#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int t;
    cin >> t;
    while (t--)
    {
        int sum = 0;
        int ii, jj;
        cin >> ii >> jj;
        for (int i = ii; i <= jj; i++)
        {
            sum += arr[i];
        }
        cout << sum << endl;
    }

    return 0;
}

////////////////////////////////////////////////////////////
/*
@ problem Link: https://www.spoj.com/problems/CSUMQ/en/
OR,
@ Problem Statement:

  CSUMQ - Cumulative Sum Query
no tags
William Macfarlane wants to look at an array.

You are given a list of N numbers and Q queries. Each query is specified by two numbers i and j; the answer to each query is the sum of every number between the range [i, j] (inclusive).

Note: the query ranges are specified using 0-based indexing.

Input
The first line contains N, the number of integers in our list (N <= 100,000). The next line holds N numbers that are guaranteed to fit inside an integer. Following the list is a number Q (Q <= 10,000). The next Q lines each contain two numbers i and j which specify a query you must answer (0 <= i, j <= N-1).

Output
For each query, output the answer to that query on its own line in the order the queries were made.

Example
Input:
3
1 4 1
3
1 1
1 2
0 2

Output:
4
5
6


*/
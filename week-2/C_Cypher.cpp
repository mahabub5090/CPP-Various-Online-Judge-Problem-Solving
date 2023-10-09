#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        vector<string> vc;
        for (int k = 0; k < n; k++)
        {
            int i;
            string s;
            cin >> i >> s;
            vc.push_back(s);
        }
        for (int i = 0; i < n; i++)
        {
            int num = arr[i];
            string dir = vc[i];
            for (int j = 0; j < dir.size(); j++)
            {
                if (dir[j] == 'U')
                {
                    if (arr[i] > 0)
                    {
                        arr[i]--;
                    }
                    else
                        arr[i] = 9;
                }
                else
                {
                    if (arr[i] < 9)
                    {
                        arr[i]++;
                    }
                    else
                        arr[i] = 0;
                }
            }
        }

        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}

////////////////////////////////////////////////////////////
/*
@ problem Link: https://codeforces.com/problemset/problem/1703/C
OR,
@ Problem Statement:

  C. Cypher
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
Luca has a cypher made up of a sequence of n
 wheels, each with a digit ai
 written on it. On the i
-th wheel, he made bi
 moves. Each move is one of two types:

up move (denoted by U
): it increases the i
-th digit by 1
. After applying the up move on 9
, it becomes 0
.
down move (denoted by D
): it decreases the i
-th digit by 1
. After applying the down move on 0
, it becomes 9
.
Example for n=4
. The current sequence is 0 0 0 0.
Luca knows the final sequence of wheels and the moves for each wheel. Help him find the original sequence and crack the cypher.

Input
The first line contains a single integer t
 (1≤t≤100
) — the number of test cases.

The first line of each test case contains a single integer n
 (1≤n≤100
) — the number of wheels.

The second line contains n
 integers ai
 (0≤ai≤9
) — the digit shown on the i
-th wheel after all moves have been performed.

Then n
 lines follow, the i
-th of which contains the integer bi
 (1≤bi≤10
) and bi
 characters that are either U
 or D
 — the number of moves performed on the i
-th wheel, and the moves performed. U
 and D
 represent an up move and a down move respectively.

Output
For each test case, output n
 space-separated digits  — the initial sequence of the cypher.

Example
inputCopy
3
3
9 3 1
3 DDD
4 UDUU
2 DU
2
0 9
9 DDDDDDDDD
9 UUUUUUUUU
5
0 5 9 8 3
10 UUUUUUUUUU
3 UUD
8 UUDUUDDD
10 UUDUUDUDDU
4 UUUU
outputCopy
2 1 1
9 0
0 4 9 6 9
Note
In the first test case, we can prove that initial sequence was [2,1,1]
. In that case, the following moves were performed:

On the first wheel: 2→D1→D0→D9
.
On the second wheel: 1→U2→D1→U2→U3
.
On the third wheel: 1→D0→U1
.
The final sequence was [9,3,1]
, which matches the input.


*/
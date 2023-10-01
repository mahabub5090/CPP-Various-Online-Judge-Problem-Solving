#include <bits/stdc++.h>
using namespace std;
int main()
{

    int a, b, c;
    cin >> a >> b >> c;
    int lp = (b / c)+1;
    while (lp--) 
    {
        if (c * lp > a && c * lp < b)
        {
            cout << c * lp;
            return 0;
        }
    }
    cout << -1;
    return 0;
}

////////////////////////////////////////////////////////////
/*
@ problem Link: https://atcoder.jp/contests/abc220/tasks/abc220_a?lang=en
@ Problem Statement:

Problem Statement
Print a number between
A and
B (inclusive) that is a multiple of
C.

If there is no such number, print -1.

Constraints
1≤A≤B≤1000
1≤C≤1000
All values in input are integers.
Input
Input is given from Standard Input in the following format:

A
B
C
Output
Print the answer.
If there is no number with the desired property, print -1.

Sample Input 1
Copy
123 456 100
Sample Output 1
Copy
200
300 or 400 would also be accepted.

Sample Input 2
Copy
630 940 314
Sample Output 2
Copy
-1


*/
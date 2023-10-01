#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    pow(a, 2) + pow(b, 2) < pow(c, 2) ? cout << "Yes" : cout << "No";
    return 0;
}

////////////////////////////////////////////////////////////
/*
@ problem Link: https://atcoder.jp/contests/abc199/tasks/abc199_a?lang=en
@ Problem Statement:

 A - Square Inequality  /
Time Limit: 2 sec / Memory Limit: 1024 MB

Score :
100 points

Problem Statement
You are given integers
A,
B, and
C.
Determine whether
A
2
 +B
2
 <C
2
  holds.

Constraints
0≤A≤1000
0≤B≤1000
0≤C≤1000
A,
B, and
C are integers.
Input
Input is given from Standard Input in the following format:

A
B
C
Output
If
A
2
 +B
2
 <C
2
  holds, print Yes; otherwise, print No.

Sample Input 1
Copy
2 2 4
Sample Output 1
Copy
Yes
Since
A
2
 +B
2
 =2
2
 +2
2
 =8 and
C
2
 =4
2
 =16, we have
A
2
 +B
2
 <C
2
 , so we should print Yes.

Sample Input 2
Copy
10 10 10
Sample Output 2
Copy
No
Since
A
2
 +B
2
 =200 and
C
2
 =100,
A
2
 +B
2
 <C
2
  does not hold.

Sample Input 3
Copy
3 4 5
Sample Output 3
Copy
No


*/
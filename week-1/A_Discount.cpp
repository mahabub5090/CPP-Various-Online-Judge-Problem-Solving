#include <bits/stdc++.h>
using namespace std;
int main()
{
    // accepted //testcase no need to macth exactly after 0.--...! 

    long double a, b;
    cin >> a >> b;
    long double ans = ((a - b) / a) * 100;
    cout << ans;

    return 0;
}

////////////////////////////////////////////////////////////
/*
@ problem Link: https://atcoder.jp/contests/abc193/tasks/abc193_a?lang=en
@ Problem Statement:

A - Discount  /
Time Limit: 2 sec / Memory Limit: 1024 MB

Score :
100 points

Problem Statement
A shop sells a product whose regular price is
A yen (Japanese currency) for
B yen. By what percentage of the regular price is this product discounted?

Constraints
A and
B are integers.
1≤B<A≤10
5

Input
Input is given from Standard Input in the following format:

A
B
Output
Print the answer as a decimal.
Your answer will be judged as correct when its absolute or relative error from our answer is at most
10
−2
 .

Sample Input 1
Copy
100 80
Sample Output 1
Copy
20.0
If a product whose regular price is
100 yen is sold for
80 yen, it is discounted by
20 percent of the regular price.

Sample Input 2
Copy
7 6
Sample Output 2
Copy
14.285714285714285714
Sample Input 3
Copy
99999 99998
Sample Output 3
Copy
0.00100001000010000100

*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    double a;cin >> a;cout << round(a) << endl;
    return 0;
}

////////////////////////////////////////////////////////////
/*
@ problem Link:
@ Problem Statement:

A - Round decimals  /
Time Limit: 2 sec / Memory Limit: 1024 MB

Score :
100 points

Problem Statement
You are given a real number
X, which is representable using at most three decimal digits, with three decimal digits.
Round
X to the nearest integer and print the result.

Constraints
0≤X<100
X is representable using at most three decimal digits.
X has three decimal digits in input.
Input
Input is given from Standard Input in the following format:

X
Output
Print the integer resulting from rounding
X to the nearest integer.

Sample Input 1
Copy
3.456
Sample Output 1
Copy
3
The digit in the first decimal place of
3.456 is
4, so we should round it down to
3.

Sample Input 2
Copy
99.500
Sample Output 2
Copy
100
Sample Input 3
Copy
0.000
Sample Output 3
Copy
0


*/
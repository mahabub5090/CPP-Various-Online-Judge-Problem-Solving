#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long int n, b;
  cin >> n >> b;
  long long int cnt = 0;
  for (long long int i = 0; i <= n; i++)
  {
    if (pow(b, i) > n)
    {
      break;
      // cout << pow(b, i) << endl;
    }
    cnt++;
  }
  cout << cnt;
  return 0;
}

////////////////////////////////////////////////////////////
/*
@ problem Link: https://atcoder.jp/contests/abc156/tasks/abc156_b?lang=en
OR,
@ Problem Statement:

  B - Digits  /
Time Limit: 2 sec / Memory Limit: 1024 MB

Score :
200 points

Problem Statement
Given is an integer
N. Find the number of digits that
N has in base
K.

Notes
For information on base-
K representation, see Positional notation - Wikipedia.

Constraints
All values in input are integers.
1≤N≤10
9

2≤K≤10
Input
Input is given from Standard Input in the following format:

N
K
Output
Print the number of digits that
N has in base
K.

Sample Input 1
Copy
11 2
Sample Output 1
Copy
4
In binary,
11 is represented as 1011.

Sample Input 2
Copy
1010101 10
Sample Output 2
Copy
7
Sample Input 3
Copy
314159265 3
Sample Output 3
Copy
18


*/
#include <bits/stdc++.h>
using namespace std;
long long int gcd(long long int i, long long int j)
{
  if (i == 0)
    return j;
  if (j == 0)
    return i;
  int rem = 0;
  while (j != 0)
  {
    rem = i % j;
    i = j;
    j = rem;
  }
  return i;
}
int main()
{
  long long int n;
  cin >> n;
  long long int cnt = 0;
  vector<int> vc;
  for (long long int i = 1; i <= n; i++)
  {
    for (long long int j = 1; j <= n; j++)
    {
      for (long long int k = 1; k <= n; k++)
      {

        cnt += gcd(i, gcd(j, k));
      }
    }
  }

  cout << cnt;
  return 0;
}

////////////////////////////////////////////////////////////
/*
@ problem Link:z
OR,
@ Problem Statement:

  C - Sum of gcd of Tuples (Easy)  /
Time Limit: 2 sec / Memory Limit: 1024 MB

Score :
300 points

Problem Statement
Find
a=1
∑
K
​

b=1
∑
K
​

c=1
∑
K
​
 gcd(a,b,c).

Here
gcd(a,b,c) denotes the greatest common divisor of
a,
b, and
c.

Constraints
1≤K≤200
K is an integer.
Input
Input is given from Standard Input in the following format:

K
Output
Print the value of
a=1
∑
K
​

b=1
∑
K
​

c=1
∑
K
​
 gcd(a,b,c).

Sample Input 1
Copy
2
Sample Output 1
Copy
9
gcd(1,1,1)+gcd(1,1,2)+gcd(1,2,1)+gcd(1,2,2)
+gcd(2,1,1)+gcd(2,1,2)+gcd(2,2,1)+gcd(2,2,2)
=1+1+1+1+1+1+1+2=9

Thus, the answer is
9.

Sample Input 2
Copy
200
Sample Output 2
Copy
10813692


*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long int a, b;
  cin >> a >> b;

  // int i = b / a;
  // int arr[i];

  stack<long long int> st;
  long long int mul = 1;
  int cnt = 1;
  while (mul < b)
  {
    if (st.empty())
    {
      mul = a * 2;
      if (mul > b)
      {
        break;
      }
      st.push(mul);
      // cout << mul << " ";
      cnt++;
    }
    else
    {
      mul = st.top() * 2;
      st.pop();
      if (mul > b)
      {
        break;
      }
      st.push(mul);
      // cout << mul << " ";
      cnt++;
    }
  }
  cout << cnt;
  return 0;
}

////////////////////////////////////////////////////////////
/*
@ problem Link: https://atcoder.jp/contests/abc083/tasks/arc088_a?lang=en
@ Problem Statement:

  C - Multiple Gift  /
Time Limit: 2 sec / Memory Limit: 256 MB

Score :
300 points

Problem Statement
As a token of his gratitude, Takahashi has decided to give his mother an integer sequence. The sequence
A needs to satisfy the conditions below:

A consists of integers between
X and
Y (inclusive).
For each
1≤i≤∣A∣−1,
A
i+1
​
  is a multiple of
A
i
​
  and strictly greater than
A
i
​
 .
Find the maximum possible length of the sequence.

Constraints
1≤X≤Y≤10
18

All input values are integers.
Input
Input is given from Standard Input in the following format:

X
Y
Output
Print the maximum possible length of the sequence.

Sample Input 1
Copy
3 20
Sample Output 1
Copy
3
The sequence
3,6,18 satisfies the conditions.

Sample Input 2
Copy
25 100
Sample Output 2
Copy
3
Sample Input 3
Copy
314159265 358979323846264338
Sample Output 3
Copy
31


*/
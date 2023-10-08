#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, t;
    cin >> s >> t;
    int cnt = 0;
    for (int i = 0; i < s.size(); i++)
    {
        s[i] != t[i] ? cnt++:cnt+=0;
    }
    cout << cnt;

    return 0;
}

////////////////////////////////////////////////////////////
/*
@ problem Link:  https://atcoder.jp/contests/abc172/tasks/abc172_b?lang=en
OR,
@ Problem Statement:

  B - Minor Change  /
Time Limit: 2 sec / Memory Limit: 1024 MB

Score :
200 points

Problem Statement
Given are strings
S and
T. Consider changing
S to
T by repeating the operation below. Find the minimum number of operations required to do so.

Operation: Choose one character of
S and replace it with a different character.

Constraints
S and
T have lengths between
1 and
2×10
5
  (inclusive).
S and
T consists of lowercase English letters.
S and
T have equal lengths.
Input
Input is given from Standard Input in the following format:

S
T
Output
Print the answer.

Sample Input 1
Copy
cupofcoffee
cupofhottea
Sample Output 1
Copy
4
We can achieve the objective in four operations, such as the following:

First, replace the sixth character c with h.
Second, replace the eighth character f with t.
Third, replace the ninth character f with t.
Fourth, replace the eleventh character e with a.
Sample Input 2
Copy
abcde
bcdea
Sample Output 2
Copy
5
Sample Input 3
Copy
apple
apple
Sample Output 3
Copy
0
No operations may be needed to achieve the objective.



*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, s;
    cin >> n >> s;
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x == s)
            continue;
        ans.push_back(x);
    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}

////////////////////////////////////////////////////////////
/*
@ problem Link:
OR,
@ Problem Statement: https://atcoder.jp/contests/abc191/tasks/abc191_b?lang=en

  B - Remove It  /
Time Limit: 2 sec / Memory Limit: 1024 MB

Score :
200 points

Problem Statement
Given are an integer sequence
A of length
N, and an integer
X.
Remove all elements that are equal to
X from
A, and arrange the remaining elements without changing the order to obtain the sequence
A
′
 . Print
A
′
 .

Constraints
1≤N≤10
5

1≤X≤10
9

1≤A
i
​
 ≤10
9

All values in input are integers.
Input
Input is given from Standard Input in the following format:

N
X
A
1
​

A
2
​

A
3
​

…
A
N
​

Output
Print the elements of
A
′
  in order, with space in between.

Sample Input 1
Copy
5 5
3 5 6 5 4
Sample Output 1
Copy
3 6 4
Removing
5s from
[3,5,6,5,4] results in
[3,6,4].

Sample Input 2
Copy
3 3
3 3 3
Sample Output 2
Copy
A
′
  can be a sequence with zero elements, in which case we should just print an empty line.



*/
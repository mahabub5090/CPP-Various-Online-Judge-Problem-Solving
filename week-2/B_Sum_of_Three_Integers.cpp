#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll int n, s;
    cin >> n >> s;
    ll int cnt = 0;

    for (ll int i = 0; i <= n; i++)
    {
        for (ll int j = 0; j <= n; j++)
        {
            if (i + j >= s - n && s >= i + j)
            {
                cnt++;
            }
        }
    }

    cout << cnt << endl;
    return 0;
}

/*
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll int n, s;
    cin >> n >> s;
    ll int cnt = 0;
    vector<int> vc;

    for (ll int i = 0; i <= n; i++)
    {
        for (ll int j = 0; j <= n; j++)
        {
            vc.push_back(i + j);
        }
    }

    for (int i = 0; i < vc.size(); i++)
    {
        for (ll int k = 0; k <= n; k++)
        {
            if (vc[i] + k == s)
                cnt++;
        }
    }

    cout << cnt;
    return 0;
}
*/

////////////////////////////////////////////////////////////
/*
@ problem Link: https://atcoder.jp/contests/abc051/tasks/abc051_b?lang=en
@ Problem Statement:

  B - Sum of Three Integers  /
Time Limit: 2 sec / Memory Limit: 256 MB

Score :
200 points

Problem Statement
You are given two integers
K and
S.
Three variable
X,Y and
Z takes integer values satisfying
0≤X,Y,Z≤K.
How many different assignments of values to
X,Y and
Z are there such that
X+Y+Z=S?

Constraints
2≤K≤2500
0≤S≤3K
K and
S are integers.
Input
The input is given from Standard Input in the following format:

K
S
Output
Print the number of the triples of
X,Y and
Z that satisfy the condition.

Sample Input 1
Copy
2 2
Sample Output 1
Copy
6
There are six triples of
X,Y and
Z that satisfy the condition:

X=0,Y=0,Z=2
X=0,Y=2,Z=0
X=2,Y=0,Z=0
X=0,Y=1,Z=1
X=1,Y=0,Z=1
X=1,Y=1,Z=0
Sample Input 2
Copy
5 15
Sample Output 2
Copy
1
The maximum value of
X+Y+Z is
15, achieved by one triple of
X,Y and
Z.

*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int s, t;
    cin >> s >> t;
    int sum = 0;
    for (int i = 0; i <= 100; i++)
    {
        for (int j = 0; j <= 1000; j++)
        {
            for (int k = 0; k <=100; k++)
            {
                if (i + j + k <= s && i * j * k <= t)
                    sum++;
            }
        }
    }
    cout << sum;
    return 0;
}

////////////////////////////////////////////////////////////
/*
@ problem Link:
@ Problem Statement:
  B - How many?  /
Time Limit: 2 sec / Memory Limit: 1024 MB

Score :
200 points

Problem Statement
How many triples of non-negative integers
(a,b,c) satisfy
a+b+c≤S and
a×b×c≤T?

Constraints
0≤S≤100
0≤T≤10000
S and
T are integers.
Input
Input is given from Standard Input in the following format:

S
T
Output
Print the number of triples of non-negative integers
(a,b,c) satisfying the conditions.

Sample Input 1
Copy
1 0
Sample Output 1
Copy
4
The triples
(a,b,c) satisfying the conditions are
(0,0,0),
(0,0,1),
(0,1,0), and
(1,0,0) ― there are four of them.

Sample Input 2
Copy
2 5
Sample Output 2
Copy
10
Sample Input 3
Copy
10 10
Sample Output 3
Copy
213
Sample Input 4
Copy
30 100
Sample Output 4
Copy
2471


*/
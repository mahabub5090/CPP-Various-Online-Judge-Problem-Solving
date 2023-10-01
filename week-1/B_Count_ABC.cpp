#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    cin.ignore();
    string s;
    cin >> s;
    // cout << s;
    string fnd = "ABC";
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        string sub = s.substr(i, 3);
        // cout << sub << endl;
        if (sub == fnd)
            sum++;
    }
    cout << sum;
    return 0;
}

////////////////////////////////////////////////////////////
/*
@ problem Link: https://atcoder.jp/contests/abc150/tasks/abc150_b?lang=en
@ Problem Statement:

B - Count ABC  /
Time Limit: 2 sec / Memory Limit: 1024 MB

Score :
200 points

Problem Statement
We have a string
S of length
N consisting of uppercase English letters.

How many times does ABC occur in
S as contiguous subsequences (see Sample Inputs and Outputs)?

Constraints
3≤N≤50
S consists of uppercase English letters.
Input
Input is given from Standard Input in the following format:

N
S
Output
Print number of occurrences of ABC in
S as contiguous subsequences.

Sample Input 1
Copy
10
ZABCDBABCQ
Sample Output 1
Copy
2
Two contiguous subsequences of
S are equal to ABC: the
2-nd through
4-th characters, and the
7-th through
9-th characters.

Sample Input 2
Copy
19
THREEONEFOURONEFIVE
Sample Output 2
Copy
0
No contiguous subsequences of
S are equal to ABC.

Sample Input 3
Copy
33
ABCCABCBABCCABACBCBBABCBCBCBCABCB
Sample Output 3
Copy
5


*/
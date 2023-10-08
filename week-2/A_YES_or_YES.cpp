#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.size();
        if (s.size() == 3)
        {
            if (s == "yes" || s == "YES" || s == "Yes" || s == "yEs" || s == "yeS" || s == "YEs" || s == "yES" || s == "YeS")
            {
                cout << "YES\n";
                continue;
            }
            else
                cout << "NO\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}

////////////////////////////////////////////////////////////
/*
@ problem Link:
OR,
@ Problem Statement:

  A. YES or YES?
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
There is a string s
 of length 3
, consisting of uppercase and lowercase English letters. Check if it is equal to "YES" (without quotes), where each letter can be in any case. For example, "yES", "Yes", "yes" are all allowable.

Input
The first line of the input contains an integer t
 (1≤t≤103
) — the number of testcases.

The description of each test consists of one line containing one string s
 consisting of three characters. Each character of s
 is either an uppercase or lowercase English letter.

Output
For each test case, output "YES" (without quotes) if s
 satisfies the condition, and "NO" (without quotes) otherwise.

You can output "YES" and "NO" in any case (for example, strings "yES", "yes" and "Yes" will be recognized as a positive response).

Example
inputCopy
10
YES
yES
yes
Yes
YeS
Noo
orZ
yEz
Yas
XES
outputCopy
YES
YES
YES
YES
YES
NO
NO
NO
NO
NO
Note
The first five test cases contain the strings "YES", "yES", "yes", "Yes", "YeS". All of these are equal to "YES", where each character is either uppercase or lowercase.



*/
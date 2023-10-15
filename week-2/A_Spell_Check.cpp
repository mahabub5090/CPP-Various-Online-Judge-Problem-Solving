#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        map<char, int> mp;
        int cnt = 'T' + 'i' + 'm' + 'u' + 'r';
        int cnt2 = 0;
        // int ok = 0;
        for (int i = 0; i < n; i++)
        {
            cnt2 += s[i];

            if (s[i] == 'T' || s[i] == 'i' || s[i] == 'm' || s[i] == 'u' || s[i] == 'r')
            {
                mp[s[i]]++;
                // cnt2++;
                // ok++;
            }
        }
        // cout << ok << " " << mp.size();
        int ok = mp.size();

        if (ok == 5)
        {
            if (cnt2 == cnt)
                cout << "YES";
            else
                cout << "NO";
        }
        else
        {
            cout << "NO";
        }

        cout << endl;
    }
    return 0;
}

////////////////////////////////////////////////////////////
/*
@ problem Link: https://codeforces.com/problemset/problem/1722/A
OR,
@ Problem Statement:

  A. Spell Check
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
Timur likes his name. As a spelling of his name, he allows any permutation of the letters of the name. For example, the following strings are valid spellings of his name: Timur, miurT, Trumi, mriTu. Note that the correct spelling must have uppercased T and lowercased other letters.

Today he wrote string s
 of length n
 consisting only of uppercase or lowercase Latin letters. He asks you to check if s
 is the correct spelling of his name.

Input
The first line of the input contains an integer t
 (1≤t≤103
) — the number of test cases.

The first line of each test case contains an integer n
 (1≤n≤10)
 — the length of string s
.

The second line of each test case contains a string s
 consisting of only uppercase or lowercase Latin characters.

Output
For each test case, output "YES" (without quotes) if s
 satisfies the condition, and "NO" (without quotes) otherwise.

You can output the answer in any case (for example, the strings "yEs", "yes", "Yes" and "YES" will be recognized as a positive answer).

Example
inputCopy
10
5
Timur
5
miurT
5
Trumi
5
mriTu
5
timur
4
Timr
6
Timuur
10
codeforces
10
TimurTimur
5
TIMUR
outputCopy
YES
YES
YES
YES
NO
NO
NO
NO
NO
NO

*/
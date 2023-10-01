#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i += 2)
    {
        cout << s[i];
    }

    return 0;
}

////////////////////////////////////////////////////////////
/*
@ problem Link: https://atcoder.jp/contests/abc072/tasks/abc072_b?lang=en
@ Problem Statement:

B - OddString  /
Time Limit: 2 sec / Memory Limit: 256 MB

Score :
200 points

Problem Statement
You are given a string
s consisting of lowercase English letters. Extract all the characters in the odd-indexed positions and print the string obtained by concatenating them. Here, the leftmost character is assigned the index
1.

Constraints
Each character in
s is a lowercase English letter.
1≤∣s∣≤10
5

Input
The input is given from Standard Input in the following format:

s
Output
Print the string obtained by concatenating all the characters in the odd-numbered positions.

Sample Input 1
Copy
atcoder
Sample Output 1
Copy
acdr
Extract the first character a, the third character c, the fifth character d and the seventh character r to obtain acdr.

Sample Input 2
Copy
aaaa
Sample Output 2
Copy
aa
Sample Input 3
Copy
z
Sample Output 3
Copy
z
Sample Input 4
Copy
fukuokayamaguchi
Sample Output 4
Copy
fkoaaauh



*/
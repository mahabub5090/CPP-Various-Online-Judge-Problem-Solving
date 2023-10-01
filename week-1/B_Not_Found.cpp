#include <bits/stdc++.h>
using namespace std;
int main()
{

    // problem e bola hoyece a theke z obdhi kichu kichu char thakbe,,jegulor maje theke jeta missing ache ota khujte hobe,,,kono ta missing thakle last sequence  ter por er char char print korte hobe and break,,z er ageaa obdhi emon hobe.jodi f thekeo word suru hoy tao ans a hobe,coz sequence all time a thekei suru hobe..but eta nessesary noy j z e ses hobe,,!

    string s;
    cin >> s;
    string fg = "None";
    int arr[27] = {0};

    for (int i = 0; i < s.size(); i++)
    {
        if (arr[abs('a' - s[i])] == 0)
        {
            arr[abs('a' - s[i])] = 1;
        }
       
    }

    for (int i = 0; i < 26; i++)
    {
        if (arr[i] == 0)
        {
            fg = 'a' + i;
            break;
        }
    }

    cout << fg;
    return 0;
}

////////////////////////////////////////////////////////////
/*
@ problem Link: https://atcoder.jp/contests/abc071/tasks/abc071_b
@ Problem Statement:

B - Not Found  /
Time Limit: 2 sec / Memory Limit: 256 MB

Score :
200 points

Problem Statement
You are given a string
S consisting of lowercase English letters. Find the lexicographically (alphabetically) smallest lowercase English letter that does not occur in
S. If every lowercase English letter occurs in
S, print None instead.

Constraints
1≤∣S∣≤10
5
  (
∣S∣ is the length of string
S.)
S consists of lowercase English letters.
Input
Input is given from Standard Input in the following format:

S
Output
Print the lexicographically smallest lowercase English letter that does not occur in
S. If every lowercase English letter occurs in
S, print None instead.

Sample Input 1
Copy
atcoderregularcontest
Sample Output 1
Copy
b
The string atcoderregularcontest contains a, but does not contain b.

Sample Input 2
Copy
abcdefghijklmnopqrstuvwxyz
Sample Output 2
Copy
None
This string contains every lowercase English letter.

Sample Input 3
Copy
fajsonlslfepbjtsaayxbymeskptcumtwrmkkinjxnnucagfrg
Sample Output 3
Copy
d



*/
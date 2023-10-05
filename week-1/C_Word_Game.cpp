#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int sen;
        cin >> sen;
        vector<string> a, b, c;
        map<string, int> mp;
        int as = 0, bs = 0, cs = 0;
        for (int i = 0; i < sen; i++)
        {
            string wrd;
            cin >> wrd;
            a.push_back(wrd);
            mp[wrd]++;
        }
        for (int i = 0; i < sen; i++)
        {
            string wrd;
            cin >> wrd;
            b.push_back(wrd);
            mp[wrd]++;
        }
        for (int i = 0; i < sen; i++)
        {
            string wrd;
            cin >> wrd;
            c.push_back(wrd);
            mp[wrd]++;
        }

        for (int i = 0; i < a.size(); i++)
        {
            if (mp[a[i]] == 3)
                continue;
            if (mp[a[i]] == 2)
                as++;
            else
                as += 3;
        }
        for (int i = 0; i < b.size(); i++)
        {
            if (mp[b[i]] == 3)
                continue;
            if (mp[b[i]] == 2)
                bs++;
            else
                bs += 3;
        }
        for (int i = 0; i < c.size(); i++)
        {
            if (mp[c[i]] == 3)
                continue;
            if (mp[c[i]] == 2)
                cs++;
            else
                cs += 3;
        }

        cout << as << " " << bs << " " << cs << endl;
    }
    return 0;
}

/* following approach got TLE,but the soluation was worked*/

// #include <bits/stdc++.h>
// using namespace std;
// #define fd(a, i) find(a.begin(), a.end(), i)
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int sen;
//         cin >> sen;
//         vector<string> a, b, c;
//         int as = 0, bs = 0, cs = 0;
//         for (int i = 0; i < sen; i++)
//         {
//             string wrd;
//             cin >> wrd;
//             a.push_back(wrd);
//         }
//         for (int i = 0; i < sen; i++)
//         {
//             string wrd;
//             cin >> wrd;
//             b.push_back(wrd);
//         }
//         for (int i = 0; i < sen; i++)
//         {
//             string wrd;
//             cin >> wrd;
//             c.push_back(wrd);
//         }

//         for (int i = 0; i < a.size(); i++)
//         {
//             auto fndB = find(b.begin(), b.end(), a[i]);
//             auto fndC = find(c.begin(), c.end(), a[i]);
//             if (fndB != b.end() && fndC != c.end())
//             {
//                 continue;
//             }
//             else if (fndB != b.end() || fndC != c.end())
//             {
//                 as++;
//             }
//             else
//             {
//                 as += 3;
//             }
//         }

//         for (int i = 0; i < b.size(); i++)
//         {
//             auto fndA = find(a.begin(), a.end(), b[i]);
//             auto fndC = find(c.begin(), c.end(), b[i]);
//             if (fndA != a.end() && fndC != c.end())
//             {
//                 continue;
//             }
//             else if (fndA != a.end() || fndC != c.end())
//             {
//                 bs++;
//             }
//             else
//             {
//                 bs += 3;
//             }
//         }
//         for (int i = 0; i < c.size(); i++)
//         {
//             auto fndA = find(a.begin(), a.end(), c[i]);
//             auto fndB = find(b.begin(), b.end(), c[i]);
//             if (fndB != b.end() && fndA != a.end())
//             {
//                 continue;
//             }
//             else if (fndB != b.end() || fndA != a.end())
//             {
//                 cs++;
//             }
//             else
//             {
//                 cs += 3;
//             }
//         }

//         cout << as << " " << bs << " " << cs << endl;
//     }
//     return 0;
// }

////////////////////////////////////////////////////////////
/*
@ problem Link: https://codeforces.com/problemset/problem/1722/C
@ Problem Statement:

  C. Word Game
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
Three guys play a game: first, each person writes down n
 distinct words of length 3
. Then, they total up the number of points as follows:

if a word was written by one person — that person gets 3 points,
if a word was written by two people — each of the two gets 1 point,
if a word was written by all — nobody gets any points.
In the end, how many points does each player have?
Input
The input consists of multiple test cases. The first line contains an integer t
 (1≤t≤100
) — the number of test cases. The description of the test cases follows.

The first line of each test case contains an integer n
 (1≤n≤1000
) — the number of words written by each person.

The following three lines each contain n
 distinct strings — the words written by each person. Each string consists of 3
 lowercase English characters.

Output
For each test case, output three space-separated integers — the number of points each of the three guys earned. You should output the answers in the same order as the input; the i
-th integer should be the number of points earned by the i
-th guy.

Example
inputCopy
3
1
abc
def
abc
3
orz for qaq
qaq orz for
cod for ces
5
iat roc hem ica lly
bac ter iol ogi sts
bac roc lly iol iat
outputCopy
1 3 1
2 2 6
9 11 5
Note
In the first test case:

The word abc
 was written by the first and third guys — they each get 1
 point.
The word def
 was written by the second guy only — he gets 3
 points.


*/
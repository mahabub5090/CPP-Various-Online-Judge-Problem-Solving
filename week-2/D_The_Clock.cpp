#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define cn(x) cin >> x
#define endl '\n'
#define foi(i, s, e) for (int i = s; i < e; i++)

void solve()
{
  vector<pair<string, string>> vc;

  string s;
  int n;
  cin >> s >> n;

  int rem = n % 60;
  int hrs = n / 60;

  int totalHrs = stoi(s.substr(0, 2));
  int totalMin = stoi(s.substr(3, 5));

  int h = totalHrs, m = totalMin;

  // cout << hrs << " " << st << "ok";

  while (true)
  {

    totalHrs += hrs;
    totalMin += rem;

    if (totalMin >= 60)
    {
      totalHrs++;
      totalMin -= 60;
    }
    if (totalHrs >= 24)
    {
      totalHrs -= 24;
    }

    string a, b;

    if (totalHrs < 10)
      a = "0" + to_string(totalHrs);
    else
      a = to_string(totalHrs);

    if (totalMin < 10)
      b = "0" + to_string(totalMin);
    else
      b = to_string(totalMin);

    vc.push_back({a, b});

      if (totalHrs == h && totalMin == m)
    {
      break;
    }
  }

  int cnt = 0;
  for (auto i : vc)
  {
    string s = i.first, s2 = i.second;
    // cout << s << " " << s2 << endl;
    reverse(s2.begin(), s2.end());
    if (s == s2)
      cnt++;
  }

  cout << cnt << endl;
}

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    solve();
  }
  return 0;
}

////////////////////////////////////////////////////////////
/*
@ problem Link: https://codeforces.com/problemset/problem/1692/D
OR,
@ Problem Statement:

  D. The Clock
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
Victor has a 24-hour clock that shows the time in the format "HH:MM" (00 ≤
 HH ≤
 23, 00 ≤
 MM ≤
 59). He looks at the clock every x
 minutes, and the clock is currently showing time s
.

How many different palindromes will Victor see in total after looking at the clock every x
 minutes, the first time being at time s
?

For example, if the clock starts out as 03:12 and Victor looks at the clock every 360
 minutes (i.e. every 6
 hours), then he will see the times 03:12, 09:12, 15:12, 21:12, 03:12, and the times will continue to repeat. Here the time 21:12 is the only palindrome he will ever see, so the answer is 1
.

A palindrome is a string that reads the same backward as forward. For example, the times 12:21, 05:50, 11:11 are palindromes but 13:13, 22:10, 02:22 are not.

Input
The first line of the input contains an integer t
 (1≤t≤100
) — the number of test cases. The description of each test case follows.

The only line of each test case contains a string s
 of length 5
 with the format "HH:MM" where "HH" is from "00" to "23" and "MM" is from "00" to "59" (both "HH" and "MM" have exactly two digits) and an integer x
 (1≤x≤1440
) — the number of minutes Victor takes to look again at the clock.

Output
For each test case, output a single integer — the number of different palindromes Victor will see if he looks at the clock every x
 minutes starting from time s
.

Example
inputCopy
6
03:12 360
00:00 1
13:22 2
15:15 10
11:11 1440
22:30 27
outputCopy
1
16
10
0
1
1
Note
The first test case is explained in the statement.

*/
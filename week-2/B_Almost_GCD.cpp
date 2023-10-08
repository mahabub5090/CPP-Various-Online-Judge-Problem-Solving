#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int cnt[1005] = {0};

    for (int i = 0; i < n; i++)
    {
        int x = arr[i];
        for (int j = 2; j <= x; j++)
        {
            if (x % j == 0)
                cnt[j]++;
        }
    }

    vector<int> vc(cnt, cnt + 1005);
    sort(vc.begin(), vc.end());
    reverse(vc.begin(), vc.end());

    for (int i = 0; i < 1005; i++)
    {
        if (cnt[i] == vc[0])
        {
            cout << i << endl;
            break;
        }
    }

    return 0;
}

////////////////////////////////////////////////////////////
/*
@ problem Link: https://atcoder.jp/contests/abc182/tasks/abc182_b?lang=en
OR,
@ Problem Statement:

  B - Almost GCD  /
Time Limit: 2 sec / Memory Limit: 1024 MB

Score :
200 points

Problem Statement
Given is an integer sequence
A:
A
1
​
 ,A
2
​
 ,A
3
​
 ,…,A
N
​
 .
Let the GCD-ness of a positive integer
k be the number of elements among
A
1
​
 ,A
2
​
 ,A
3
​
 ,…,A
N
​
  that are divisible by
k.
Among the integers greater than or equal to
2, find the integer with the greatest GCD-ness. If there are multiple such integers, you may print any of them.

Constraints
1≤N≤100
2≤A
i
​
 ≤1000
All values in input are integers.
Input
Input is given from Standard Input in the following format:

N
A
1
​
 A
2
​
 A
3
​
 …A
N
​

Output
Print an integer with the greatest GCD-ness among the integers greater than or equal to
2. If there are multiple such integers, any of them will be accepted.

Sample Input 1
Copy
3
3 12 7
Sample Output 1
Copy
3
Among
3,
12, and
7, two of them -
3 and
12 - are divisible by
3, so the GCD-ness of
3 is
2.
No integer greater than or equal to
2 has greater GCD-ness, so
3 is a correct answer.

Sample Input 2
Copy
5
8 9 18 90 72
Sample Output 2
Copy
9
In this case, the GCD-ness of
9 is
4.
2 and
3 also have the GCD-ness of
4, so you may also print
2 or
3.

Sample Input 3
Copy
5
1000 1000 1000 1000 1000
Sample Output 3
Copy
1000


*/
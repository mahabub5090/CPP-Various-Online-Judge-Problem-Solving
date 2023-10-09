#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        mp[arr[i]]++;
    }
    // sort(arr, arr + n);

    for (auto i : mp)
    {
        if (i.second == 1)
        {
            cout << i.first;
            break;
        }
    }

    return 0;
}

////////////////////////////////////////////////////////////
/*
@ problem Link: https://www.spoj.com/problems/OLOLO/en/
OR,
@ Problem Statement:

  OLOLO - Onotole needs your help
#ad-hoc-1

Onotole has a lot of pyani. Each pyani has a number, writing on it. Pyanis with equal numbers are indistinguishable. Onotole knows everything, so, he knows that each pyani appeared twice, and only one pyani is unique. He wants to get вздръжни эффект, and he needs the unique pyani. Given the list of pyanis denote which one of them appeared once (it is guaranteed that other pyanis appeared twice).

Input
First line of input contains number of pyanis N <= 500 000. Next N lines contain a single positive integer 1 <= Pi <= 10^9.

Output
Output one positive integer on pyani, which appeared once.

Example
Input:
3
1
8
1

Output:
8
Onotole has found not optimal AC algorithms, so all solutions will be rejudged. He is watching you.



*/
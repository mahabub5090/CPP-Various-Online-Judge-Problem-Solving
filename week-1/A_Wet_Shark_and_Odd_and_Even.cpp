#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll int n;
    cin >> n;
    ll int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    ll int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    sort(arr, arr + n);

    if (sum % 2 == 0)
        cout << sum;
    else
    {
        ll int i = 0;
        while (sum % 2 != 0)
        {
            sum -= arr[i];

            if (sum % 2 != 0)
                sum += arr[i];
            i++;
            if (sum % 2 == 0)
                break;
        }
        cout << sum;
    }

    return 0;
}

////////////////////////////////////////////////////////////
/*
@ problem Link: https://codeforces.com/problemset/problem/621/A
@ Problem Statement:

  A. Wet Shark and Odd and Even
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
Today, Wet Shark is given n integers. Using any of these integers no more than once, Wet Shark wants to get maximum possible even (divisible by 2) sum. Please, calculate this value for Wet Shark.

Note, that if Wet Shark uses no integers from the n integers, the sum is an even integer 0.

Input
The first line of the input contains one integer, n (1 ≤ n ≤ 100 000). The next line contains n space separated integers given to Wet Shark. Each of these integers is in range from 1 to 109, inclusive.

Output
Print the maximum possible even sum that can be obtained if we use some of the given integers.

Examples
inputCopy
3
1 2 3
outputCopy
6
inputCopy
5
999999999 999999999 999999999 999999999 999999999
outputCopy
3999999996
Note
In the first sample, we can simply take all three integers for a total sum of 6.

In the second sample Wet Shark should take any four out of five integers 999 999 999.



*/
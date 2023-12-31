#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    for (int i = 0; i <= c; i++)
    {
        for (int j = 0; j <= c; j++)
        {
            if (i * a + j * b == c)
            {
                cout << "Yes";
                return 0;
            }
        }
    }

    {
        cout << "No";
    }

    return 0;
}

////////////////////////////////////////////////////////////
/*
@ problem Link:
@ Problem Statement:

A. Ebony and Ivory
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
Dante is engaged in a fight with "The Savior". Before he can fight it with his sword, he needs to break its shields. He has two guns, Ebony and Ivory, each of them is able to perform any non-negative number of shots.

For every bullet that hits the shield, Ebony deals a units of damage while Ivory deals b units of damage. In order to break the shield Dante has to deal exactly c units of damage. Find out if this is possible.

Input
The first line of the input contains three integers a, b, c (1 ≤ a, b ≤ 100, 1 ≤ c ≤ 10 000) — the number of units of damage dealt by Ebony gun and Ivory gun, and the total number of damage required to break the shield, respectively.

Output
Print "Yes" (without quotes) if Dante can deal exactly c damage to the shield and "No" (without quotes) otherwise.

Examples
inputCopy
4 6 15
outputCopy
No
inputCopy
3 2 7
outputCopy
Yes
inputCopy
6 11 6
outputCopy
Yes
Note
In the second sample, Dante can fire 1 bullet from Ebony and 2 from Ivory to deal exactly 1·3 + 2·2 = 7 damage. In the third sample, Dante can fire 1 bullet from ebony and no bullets from ivory to do 1·6 + 0·11 = 6 damage.




*/
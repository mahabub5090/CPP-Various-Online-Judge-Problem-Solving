#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;cin>>n>>m;n==m?cout<<"Yes":cout<<"No";  
    return 0;
}




////////////////////////////////////////////////////////////
/*
@ problem Link: https://atcoder.jp/contests/abc152/submissions/me
@ Problem Statement: A - AC or WA  /
Time Limit: 2 sec / Memory Limit: 1024 MB

Score :
100 points

Problem Statement
Takahashi is participating in a programming contest, AXC001. He has just submitted his code to Problem A.
The problem has
N test cases, all of which must be passed to get an AC verdict.
Takahashi's submission has passed
M cases out of the
N test cases.
Determine whether Takahashi's submission gets an AC.

Constraints
1≤N≤100
0≤M≤N
All values in input are integers.
Input
Input is given from Standard Input in the following format:

N
M
Output
If Takahashi's submission gets an AC, print Yes; otherwise, print No.

Sample Input 1
Copy
3 3
Sample Output 1
Copy
Yes
All three test cases have been passed, so his submission gets an AC.

Sample Input 2
Copy
3 2
Sample Output 2
Copy
No
Only two out of the three test cases have been passed, so his submission does not get an AC.

Sample Input 3
Copy
1 1
Sample Output 3
Copy
Yes



*/
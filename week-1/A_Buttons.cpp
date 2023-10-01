#include<bits/stdc++.h>
using namespace std;
int main(){
      int a,b;cin>>a>>b;if(a==b)cout<<a+b;else cout<<max(a,b)* 2-1<<endl;
    return 0;
}

////////////////////////////////////////////////////////////
/*
@ problem Link: https://atcoder.jp/contests/abc124/tasks/abc124_a?lang=en
@ Problem Statement:

A - Buttons  /
Time Limit: 2 sec / Memory Limit: 1024 MB

Score :
100 points

Problem Statement
There are two buttons, one of size
A and one of size
B.

When you press a button of size
X, you get
X coins and the size of that button decreases by
1.

You will press a button twice. Here, you can press the same button twice, or press both buttons once.

At most how many coins can you get?

Constraints
All values in input are integers.
3≤A,B≤20
Input
Input is given from Standard Input in the following format:

A
B
Output
Print the maximum number of coins you can get.

Sample Input 1
Copy
5 3
Sample Output 1
Copy
9
You can get
5+4=9 coins by pressing the button of size
5 twice, and this is the maximum result.

Sample Input 2
Copy
3 4
Sample Output 2
Copy
7
Sample Input 3
Copy
6 6
Sample Output 3
Copy
12


*/
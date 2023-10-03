//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    long maximumSumSubarray(int K, vector<int> &Arr, int N)
    {
        // code here

        long long int mx = LONG_MIN;
        long long int i = 0, j = 0;
        long long int sum = 0;
        while (j < N)
        {

            if (j < K)
            {
                sum += Arr[j];
                j++;
            }
            else
            {
                sum += Arr[j];
                sum -= Arr[i];
                i++;
                j++;
            }
            // cout<<sum<<endl;

            if (sum >= mx)
            {
                mx = sum;
            }
        }

        return mx;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, K;
        cin >> N >> K;
        ;
        vector<int> Arr;
        for (int i = 0; i < N; ++i)
        {
            int x;
            cin >> x;
            Arr.push_back(x);
        }
        Solution ob;
        cout << ob.maximumSumSubarray(K, Arr, N) << endl;
    }
    return 0;
}
// } Driver Code Ends

////////////////////////////////////////////////////////////
/*
@ problem Link: https://practice.geeksforgeeks.org/problems/max-sum-subarray-of-size-k5313/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article
@ Problem Statement:

Given an array of integers Arr of size N and a number K. Return the maximum sum of a subarray of size K.

NOTE*: A subarray is a contiguous part of any given array.

Example 1:

Input:
N = 4, K = 2
Arr = [100, 200, 300, 400]
Output:
700
Explanation:
Arr3  + Arr4 =700,
which is maximum.


Example 2:

Input:
N = 4, K = 4
Arr = [100, 200, 300, 400]
Output:
1000
Explanation:
Arr1 + Arr2 + Arr3
+ Arr4 =1000,
which is maximum.


Your Task:

You don't need to read input or print anything. Your task is to complete the function maximumSumSubarray() which takes the integer k, vector Arr with size N, containing the elements of the array and returns the maximum sum of a subarray of size K.



Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)



Constraints:
1<=N<=106
1<=K<=N

*/
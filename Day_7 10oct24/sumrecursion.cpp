/*
Given an integer n, calculate the sum of series 13 + 23 + 33 + 43 + … till n-th term.

Examples:

Input: n = 5
Output: 225
Explanation: 13 + 23 + 33 + 43 + 53 = 225
Input: n = 7
Output: 784
Explanation: 13 + 23 + 33 + 43 + 53 + 63 + 73 = 784
*/
#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    long long sum=0;
    long long sumOfSeries(long long n) {
        // code here
        
        if(n==0) return sum;
        sum+=(n*n*n);
        sumOfSeries(n-1);
    }
};

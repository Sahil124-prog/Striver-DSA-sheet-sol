  /*Find all factorial numbers less than or equal to n
Difficulty: EasyAccuracy: 48.96%Submissions: 85K+Points: 2
A number n is called a factorial number if it is the factorial of a positive integer. For example, the first few factorial numbers are 1, 2, 6, 24, 120,
Given a number n, the task is to return the list/vector of the factorial numbers smaller than or equal to n.

Examples:

Input: n = 3
Output: 1 2
Explanation: The first factorial number is 1 which is less than equal to n. The second number is 2 which is less than equal to n,but the third factorial number is 6 which is greater than n. So we print only 1 and 2.
Input: n = 6
Output: 1 2 6
Explanation: The first three factorial numbers are less than equal to n but the fourth factorial number 24 is greater than n. So we print only first three factorial numbers.
  */
  #include<bits/stdc++.h>
  using namespace std;
  class solution{
  public:
    int fact=1;
    vector<long long> factorialNumbers(long long n) {
        // Write Your Code here
        vector<long long> result;
        long long fact = 1;
        for (int i = 2; fact <= n; i++) {
            result.push_back(fact);
            fact = fact * i;  
        }
        return result;
    }
};

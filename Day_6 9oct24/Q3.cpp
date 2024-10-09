/*Print 1 To N Without Loop
Difficulty: BasicAccuracy: 61.33%Submissions: 240K+Points: 1
Print numbers from 1 to n without the help of loops. You only need to complete the function printNos() that takes N as parameter and prints number from 1 to N recursively.

Don't print newline, it will be added by the driver code.

Examples

Input: n = 10
Output: 1 2 3 4 5 6 7 8 9 10
Input: n = 5
Output: 1 2 3 4 5
*/
#include<bits/stdc++.h>
using namespace std;
  class solution{
public:
    //Complete this function
    void printNos(int N)
    {
        //Your code here
        if(N==0) return;
        printNos(N-1);
        cout<<N<<" ";
    }
};
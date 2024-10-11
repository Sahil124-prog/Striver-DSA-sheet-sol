/*
You are given an array of integers arr . Your task is to reverse the given array and return the reversed array.

Examples:

Input: arr = [1, 2, 3, 4]
Output: [4, 3, 2, 1]
Explanation: The elements of the array are 1 2 3 4. After reversing the array, the first element goes to the last position,
the second element goes to the second last position and so on. Hence, the answer is 4 3 2 1.
Input: arr = [1]
Output: [1]
Explanation: The array has only single element, hence the reversed array is same as the original.
*/
#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:

    void reverseArray(vector<int> &arr) {
        // code here
         int left = 0;  
        int right = arr.size() - 1;  
        
        while (left < right) {  
            // Swap the elements  
            swap(arr[left], arr[right]);  
            left++;  
            right--;  
        }  
    } 
}; 
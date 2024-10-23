#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    // a,b : the arrays
    // Function to return a list containing the union of the two arrays.
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        // Your code here
        // return vector with correct order of elements
         vector<int> result;
    int i = 0, j = 0;

    while (i < a.size() && j < b.size()) {
        if (a[i] < b[j]) {
            if (result.empty() || result.back() != a[i]) { // Avoid duplicates
                result.push_back(a[i]);
            }
            i++;
        }
        else if (a[i] > b[j]) {
            if (result.empty() || result.back() != b[j]) { // Avoid duplicates
                result.push_back(b[j]);
            }
            j++;
        }
        else {
            if (result.empty() || result.back() != a[i]) { // Avoid duplicates
                result.push_back(a[i]);
            }
            i++;
            j++;
        }
    }

    // Add remaining elements from a
    while (i < a.size()) {
        if (result.empty() || result.back() != a[i]) {
            result.push_back(a[i]);
        }
        i++;
    }

    // Add remaining elements from b
    while (j < b.size()) {
        if (result.empty() || result.back() != b[j]) {
            result.push_back(b[j]);
        }
        j++;
    }

    return result;
    }
};
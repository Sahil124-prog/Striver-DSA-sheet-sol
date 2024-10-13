
#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    // Function returns the second
    // largest elements
    int getSecondLargest(vector<int> &arr) {
        // Code Here
        int max=INT_MIN;
        int smax=INT_MIN;
        int n = arr.size();
        for(int i=0;i<n;i++){
            if(arr[i]>max){
                max=arr[i];
            }
        }
        for(int i=0;i<n;i++){
            if(arr[i]>smax && arr[i]!=max){
                smax=arr[i];
            }
        }
        if(smax==INT_MIN) return-1;
        else return smax;
    }
};
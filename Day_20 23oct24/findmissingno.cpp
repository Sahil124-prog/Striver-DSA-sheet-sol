#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n= nums.size();
        int max=INT_MIN;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            if(nums[i]!=i){
                return i;
            }
        }
        return n;
    }
};
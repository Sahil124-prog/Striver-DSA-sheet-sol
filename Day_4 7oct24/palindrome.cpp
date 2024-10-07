class Solution {
public:
    bool isPalindrome(int x) {
        int original=x;
        long  reverse=0;
        if(original<0) return false;
        while(x!=0){
            int rem = x%10;
            reverse= reverse*10+rem;
            x/=10;
        }
        if(original==reverse) return true;
        else return false;
    }
};
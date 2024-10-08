class Solution {
  public:
    string armstrongNumber(int n) {
        // code here
        int original=n;
        int sum=0;
        while(n!=0){
            int temp=n%10;
            sum=sum+(temp*temp*temp);
            n/=10;
        }
        if(original==sum){
            return "true";
        }
        else {
            return "false";
        }
    }
};
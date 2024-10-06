class Solution{
public:
    int evenlyDivides(int n){
        //code here
        int count=0;
        int temp;
        int original=n;
        while(n!=0){
            temp=n%10;
            n/=10;
            if( temp>0 && original%temp==0){
            count++;
            }
            
        }
        return count;
    }
};
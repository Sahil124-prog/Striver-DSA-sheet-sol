class Solution
{
    public:
    long long sumOfDivisors(int N)
    {
        // Write Your Code here
        long long result=0;
        for(int i=1;i<=N;i++){
            result += (N / i) * i;
        }
        return result;
    }
};
#include<bits/stdc++.h>
using namespace std;
class solution{
    public:
    long long gcd(long long a, long long b) {
        while (b != 0) {
            long long temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }
    vector<long long> lcmAndGcd(long long a, long long b) {
        long long gcd_val = gcd(a, b);
        long long lcm_val = abs(a * b) / gcd_val;
        return {lcm_val, gcd_val};
    }
};
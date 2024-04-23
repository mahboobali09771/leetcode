class Solution {
public:
    int arrangeCoins(int n) {
        long long lo = 0;
        long long hi = n;
        while(lo<=hi){
            long long k = lo + (hi-lo)/2;
            long long m = k*(k+1)/2;
            if(m==n){
                return (int)k;
                break;
            }
            else if(m>n) hi = k-1;
            else lo = k+1;
        }
        return (int)hi;
        
    }
};
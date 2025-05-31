class Solution {
public:
    int reverse(int x) {
        long long  rev=0;
        int r;
        int digit = 0;
        while(x!=0){
            digit = x%10;
            rev = rev*10 + digit;
            x = x/10;

        }
        return (rev<INT_MIN || rev>INT_MAX) ? 0 : rev;
    }
};
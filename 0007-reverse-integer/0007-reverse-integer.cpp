class Solution {
public:
    int reverse(int x) {
        if(x==INT_MIN) return 0;
        int n = abs(x);
        int r = 0;
        while(n!=0){
            if(r>INT_MAX/10) return 0;
            r *= 10;
            if(r>INT_MAX-(n%10)) return 0;
            r += (n%10);
            n /= 10; 
        }
        if(x<0) r = -r;
        return r;
    }
};
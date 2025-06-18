class Solution {
public:
    bool isPalindrome(int x) {
        int y = x;
        int ld;
        long long revs = 0;
        while(y>0){
            ld = y%10;
            y = y/10;
            revs = (revs * 10) + ld;

        }
        if(revs==x) return true;
        else return false;

    }
};
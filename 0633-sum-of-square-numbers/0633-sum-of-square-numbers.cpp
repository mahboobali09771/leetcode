class Solution {
public:
    bool isperfectSquare(int n){
        int root = sqrt(n);
        if(root*root==n) {
            return true;
        }
        else return false;
    }
    bool judgeSquareSum(int c) {
        int x = 0;
        int y = c;
        while(x<=y){
            if(isperfectSquare(x) && isperfectSquare(y)) {
                return true;
            }
            else if(!isperfectSquare(y)){
                y = (int)sqrt(y) * (int)sqrt(y);
                x = c - y;
            }
            else // x is not perfect square
            {
                x = ((int)sqrt(x) + 1) * ((int)sqrt(x) + 1);
                y = c - x;
            }
        }
        return false;
        
    }
};
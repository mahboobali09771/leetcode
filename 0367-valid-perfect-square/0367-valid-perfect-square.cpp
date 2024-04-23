class Solution {
public:
    bool isPerfectSquare(int num) {
        // int x = num;
        //   int lo = 0;
        //  int hi = x;
        // while(lo<=hi){
        //     int mid = lo + (hi-lo)/2;
        //     long long m = (long long)mid;
        //     long long y = (long long)x;
        //     if((m*m)==y) return true;
        //     else if((m*m)>y) hi = mid-1;
        //     else lo = mid+1;
        // }
        // return false;
        int root = sqrt(num);
        if(root*root==num) return true;
        else return false;
    }
};
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& arr, int target) {
        int m = arr.size();
        int n = arr[0].size();
        int lo = 0;
        int hi = m*n -1;
        while(lo<=hi){
            int mid = lo + (hi-lo)/2;
            int row = mid/n;
            int col = mid % n;
            if(arr[row][col]==target) return true;
            else if(arr[row][col]>target) hi = mid -1;
            else lo = mid + 1;
        }
        return false;
        
    }
};
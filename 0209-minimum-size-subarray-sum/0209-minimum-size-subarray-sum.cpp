class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int len;
        int minLen = INT_MAX;
        int sum = 0;
        int i=0;
        int j=0;
        while(j<n){
            sum += nums[j];
            while(sum>=target){
                len = j-i+1;
                minLen = min(minLen, len);
                sum -= nums[i];
                i++;
            }
            j++;
        }
        if(minLen==INT_MAX) return 0;
        return minLen;
    } // TC = O(n) or O(2*n)
};
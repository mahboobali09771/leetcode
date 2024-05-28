class Solution {
public:
    vector<long long> findPrefixScore(vector<int>& nums) {
        int n = nums.size();
        vector<long long int>res(n,0);
        res[0] = 2*nums[0];
        int maxi = nums[0];
        // maxi = max(maxi, nums[0]);
        for(int i=1;i<n;i++){
            maxi = max(maxi, nums[i]);
            res[i] = nums[i] + maxi + res[i-1];
        }
        return res;
    }
};
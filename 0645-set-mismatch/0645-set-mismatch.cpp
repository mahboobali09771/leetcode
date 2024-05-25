class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        for(int i=0;i<n;i++){
            while(nums[i]!=nums[nums[i]-1]) swap(nums[i], nums[nums[i]-1]);
        }
        for(int i=0;i<n;i++){
            if(i+1!=nums[i]) return {nums[i],i+1};
        }
        return {};
    }
};
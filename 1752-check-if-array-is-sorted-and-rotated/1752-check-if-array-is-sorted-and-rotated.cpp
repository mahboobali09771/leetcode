class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        bool flag = false; //  not visited
        for(int i=0;i<n-1;i++){
            if(nums[i]>nums[i+1]){
            if(flag == true) return false;
            flag = true; // one times 
            if(nums[n-1]>nums[0]) return false;
            }
        }
        return true;
    }
};
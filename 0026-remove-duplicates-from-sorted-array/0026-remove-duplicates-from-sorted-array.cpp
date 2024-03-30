class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> ans;
        ans.push_back(nums[0]);
        for(int i=1;i<nums.size();i++){
           if(nums[i]!=ans[ans.size()-1]) ans.push_back(nums[i]);
        }
        for(int i=0;i<ans.size();i++){
            nums[i] = ans[i];
        }
        return ans.size();
        
    }
};
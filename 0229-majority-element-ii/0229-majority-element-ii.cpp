class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> v;
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int i=0;
        while(i<n){
            int count = 1;
            int j = i+1;
            while(j<n && nums[i]==nums[j]){
            j++;
            count++;
            }
            if(count>n/3)  v.push_back(nums[i]);
            i = j; 
        }
        return v;
    }
};
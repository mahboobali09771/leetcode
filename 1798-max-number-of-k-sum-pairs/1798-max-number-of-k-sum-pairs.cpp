class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        int count = 0;
        for(auto x:nums) mp[x]++;
        for(auto x:nums){
            int diff = k - x;
            if(diff==x){
                count += (mp[diff]/2);
                mp.erase(x);
            }
            else if(mp.count(diff)){
                count += min(mp[diff] , mp[x]);
                mp.erase(x);
                mp.erase(diff);
            }
        }
        return count;
    }
};
class FindSumPairs {
public:
    unordered_map<int,int>mp;
    vector<int>a,b;
    FindSumPairs(vector<int>& nums1, vector<int>& nums2) {
        for(auto x:nums2){
            mp[x]++;
        }
        a = nums1;
        b = nums2;
    }
    
    void add(int index, int val) {
        mp[b[index]]--;
        b[index] += val;
        mp[b[index]]++;
    }
    
    int count(int tot) {
        int ans = 0;
        for(int i=0;i<a.size();i++){
            int x = tot-a[i];
            if(mp.find(x)!=mp.end()) ans += mp[x];
        }
        return ans;
    }
};

/**
 * Your FindSumPairs object will be instantiated and called as such:
 * FindSumPairs* obj = new FindSumPairs(nums1, nums2);
 * obj->add(index,val);
 * int param_2 = obj->count(tot);
 */
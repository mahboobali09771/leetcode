class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        int m = queries.size();
        int n = nums.size();
        vector<int> ans(m);
        sort(nums.begin(),nums.end());  // TC = O(nlogn) , SC = O(logn)
        for(int i=1;i<n;i++){
            nums[i] = nums[i] + nums[i-1];
        }
        for(int i=0;i<m;i++){  // TC = O(m*n)
            int maxLen = 0;
            int lo = 0;
            int hi = n-1;
            while(lo<=hi){
                int mid = lo + (hi-lo)/2;
                if(nums[mid]>queries[i]) hi = mid-1;
                else{
                    // nums[mid]<= queries[i]
                    maxLen = mid + 1;
                    lo = mid + 1;
                }
            }
            ans[i] = maxLen;
        }
        return ans; // TC = O(n*(m*logn)) ~= O(m*n)
    }
};


// time complexity is large 
/*
class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        int m = queries.size();
        int n = nums.size();
        vector<int> ans(m);
        sort(nums.begin(),nums.end());  // TC = O(nlogn) , SC = O(logn)
        for(int i=1;i<n;i++){
            nums[i] = nums[i] + nums[i-1];
        }
        for(int i=0;i<m;i++){  // TC = O(m*n)
            int len = 0;
            for(int j=0;j<n;j++){
                if(nums[j]>queries[i]) break;
                len++;
            }
            ans[i] = len;
        }
        return ans; // TC = O(n*(m*logn)) ~= O(m*n)
    }
};
*/
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
       int n = nums.size();
        int i =0; // i for travel zero
        int j= 0; // j for travel non-zero
        while(i<n && j<n){
            if(nums[i] == 0 && nums[j] != 0){
                if(i<j) swap(nums[i],nums[j]);
                else j++;
              }
            
            if(nums[i] != 0) i++;
            if(nums[j] == 0) j++;
            }
    }
};

// 2nd method using extra space
// class Solution {
// public:
//     void moveZeroes(vector<int>& nums) {
//         vector<int> v;
//         int n = nums.size();
//         int noz = 0;
//         for(int i=0;i<n;i++){
//             if(nums[i]!=0) v.push_back(nums[i]);
//             else noz++;
//         }
//         for(int i=1;i<=noz;i++) v.push_back(0);
        
//         for(int i=0;i<n;i++){
//         nums[i] = v[i];
//         }
        
//     }
// };

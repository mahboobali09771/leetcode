/* TC = O(n^2)
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<n-1;j++){
                if(nums[j]==0) swap(nums[j],nums[j+1]);
            }
        }
    }
};
*/
class Solution { // TC = O(n)
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        int j= 0;
        while(i<n && j<n){
            if(nums[i]==0 && nums[j]!=0) {
                if(i<j) swap(nums[i],nums[j]);
                else j++;
            }
            if(nums[i]!=0) i++;
            if(nums[j]==0) j++;
        }
    }
};

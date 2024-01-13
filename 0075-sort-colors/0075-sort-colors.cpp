class Solution {
public:
    void sortColors(vector<int>& nums) {
// method 1
        // one pass solution
        int low=0;
        int mid=0;
        int high=nums.size()-1;
        while(mid<=high){
            if(nums[mid] == 2){
            int temp = nums[mid];
                nums[mid] = nums[high];
                nums[high] = temp;
                high--;
            }
            else if(nums[mid] == 0){
                int temp = nums[mid];
                nums[mid] = nums[low];
                nums[low] = temp;
                low++;
                mid++;
                }
            else { 
               mid++; 
            }
        }
// method 2
       /* // two pass solution
       int n = nums.size();
        int no0 = 0;
        int no1 = 0;
        int no2 = 0;
        // count 
        for(int i=0;i<n;i++){
            if(nums[i]==0) no0++;
            else if(nums[i]==1) no1++;
            else no2++;
        }
        // fill
        for(int i=0;i<n;i++){
    if(i<no0) nums[i] = 0;
            else if(i<(no0+no1)) nums[i] = 1;
            else nums[i] = 2; 
        }
        */
        return;
    }
};
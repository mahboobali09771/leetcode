class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;  // in case k > n
        vector<int> v(n);

        // place each element in its new position
        for(int i = 0; i < n; i++) {
            v[(i + k) % n] = nums[i];
        }

        nums = v; // copy back
    }
};

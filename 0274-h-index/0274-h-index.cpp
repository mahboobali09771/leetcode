class Solution {
public:
    int hIndex(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int hMax = 0;
        int n = arr.size();
        for(int i=0;i<n;i++){
            int h = min(arr[i], n-i);
             hMax = max(hMax, h);
        }
        return hMax;
    }
};
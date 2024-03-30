class Solution {
public:
    vector<int> pivotArray(vector<int>& arr, int pivot) {
        int n = arr.size();
        vector<int> ans;
        for(int i=0;i<n;i++){
            if(arr[i]<pivot) ans.push_back(arr[i]);
        }
        
        for(int i=0;i<n;i++){
             if(arr[i]==pivot) ans.push_back(arr[i]);
        }
        
        for(int i=0;i<n;i++){
            if(arr[i]>pivot) ans.push_back(arr[i]);
        }
        
        return ans;
        
    }
};
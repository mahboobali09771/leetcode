class Solution {
public:
    int removeElement(vector<int>& arr, int val) {
        int n = arr.size();
        int i = 0;
        int j = n-1;
        while(i<j){
            if(arr[i]==val && arr[j]!=val){
                swap(arr[i],arr[j]);
            }
            else if(arr[i]!=val) i++;
            else if(arr[j]==val) j--;
        }
        int count = 0;
        for(int i=0;i<n;i++){
            if(arr[i]!=val) count++;
        }
        return count;
        
    }
};
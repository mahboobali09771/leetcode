class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        int freq[1001] = {0};
        for(auto x:arr1) freq[x]++;
        int j = 0;
        for(int i=0;i<arr2.size();i++){
            while(freq[arr2[i]]--)arr1[j++] = arr2[i];
        }
        for(int i=0;i<=1000;i++){
            while(freq[i] > 0){
                arr1[j++] = i;
                freq[i]--;
            }
        }
        return arr1;
    }
};
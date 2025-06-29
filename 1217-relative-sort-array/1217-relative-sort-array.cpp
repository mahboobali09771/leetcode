class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        map<int,int> mp;
        for(auto x:arr1) mp[x]++;
        int j = 0;
        for(int i=0;i<arr2.size();i++){
            while(mp[arr2[i]]--)arr1[j++] = arr2[i];
        }
        for(auto x:mp){
            while(x.second>0){
                arr1[j++] = x.first;
                x.second--;
            }
        }
        return arr1;
    }
};
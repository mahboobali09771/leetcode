class Solution {
public:
    bool isAcronym(vector<string>& arr, string s) {
        int n = arr.size();
        if(n!=s.length()) return false;
        string str = "";
        for(int i=0; i<n;i++){
            str.push_back(arr[i][0]);
        }
        if(s!=str) return false;
        return true;
        
    }
};
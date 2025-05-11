class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& arr) {
        int n = arr.size();
        int count = 0;
        for(int i=0;i<n-1;i++){
            string rev = arr[i];
            reverse(rev.begin(),rev.end());
            for(int j=i+1;j<n;j++){
                if(rev==arr[j]) count++;
            }
        }
        return count;
    }
};
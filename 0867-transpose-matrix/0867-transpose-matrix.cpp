class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int m = matrix.size(); // rows
        int n = matrix[0].size(); // columns
        // int t[n][m];
        vector<vector<int>> t(n,vector<int>(m));
        //store
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                t[i][j] = matrix[j][i];
            }
        }
        return t;
        
        
    }
};
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        // transpose
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int temp = matrix[i][j];
                matrix[i][j] = matrix[j][i];
                matrix[j][i] = temp;  
                    }
             }
        // reverse each row
        for(int k=0;k<n;k++){ // traversing each row
            int i=0;
            int j=n-1;
            while(i<=j){ // swapping k,i and k,j
                int temp=matrix[k][i];
                matrix[k][i] = matrix[k][j];
                matrix[k][j] = temp;
                i++;
                j--;
           }
            
         }
    }
};
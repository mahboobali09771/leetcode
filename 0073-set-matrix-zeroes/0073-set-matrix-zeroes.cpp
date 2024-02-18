
class Solution {
public:
    void setZeroes(vector<vector<int>>& arr) {
        int m = arr.size();
        int n = arr[0].size();
        vector<bool> row(m,false);
        vector<bool> col(n,false);
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
            if(arr[i][j] == 0){
                row[i] = true; // true means 0 set  
                col[j] = true;
                }
            }
        }
        // set rows zero
        for(int i=0;i<m;i++){
            if(row[i] == true ){
            for(int j=0;j<n;j++){
                arr[i][j] = 0;    
            }    
        }
            
        }
        for(int j=0;j<n;j++){
             if(col[j] == true ){
            for(int i=0;i<m;i++){
                arr[i][j] = 0;    
            }    
        }
            
        }

        
    }
};

/*
// 2nd method
class Solution {
public:
    void setZeroes(vector<vector<int>>& arr) {
        int m = arr.size();
        int n = arr[0].size();
    int copy[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            copy[i][j] = arr[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(copy[i][j] == 0){ 
               for(int c=0;c<3;c++){
                arr[i][c] = 0;
               }
               for(int r=0;r<3;r++){
                arr[r][j] = 0;
               }
               
            }
        }
      }  
    }
};
*/
class Solution {
public:
    vector<int> getRow(int rowIndex) {
           int m = rowIndex;
         vector<vector<int>> v;
    // generate
    for(int i=0;i<=m;i++){
          vector<int> a(i+1);
        v.push_back(a);
        for(int j=0;j<=i;j++){
            if(j==0 || j==i){
                v[i][j] = 1;
            }
            else{
                v[i][j] = v[i-1][j] + v[i-1][j-1];
            }
        }
    }
     
    
       return v[m];
    }
};
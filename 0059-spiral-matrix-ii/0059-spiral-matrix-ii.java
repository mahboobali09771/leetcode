class Solution {
public int[][] generateMatrix(int n) {
        
        int[][] matrix = new int[n][n];
        int tne = n*n;
    int minr =0 , minc = 0;
    int maxr = n-1, maxc = n-1;
        int count = 0;
    while(count<tne){
        // right
        for(int j=minc;j<=maxc && count<tne;j++){
            matrix[minr][j] = count+1;
            count++;
        }
        minr++;
        // down
        for(int i=minr;i<=maxr && count<tne;i++){
        matrix[i][maxc] = count+1;
            count++;
        }
        maxc--;
        // left
        for(int j=maxc;j>=minc && count<tne;j--){
            matrix[maxr][j] = count+1;
            count++;
        }
        maxr--;
        // up
        for(int i=maxr;i>=minr && count<tne;i--){
                matrix[i][minc] = count+1;
                 count++;
        }
        minc++;
         }
      return matrix;                              
    }
};
class Solution {
public:
    int numberOfBeams(vector<string>& arr) {
        int prevOnes = 0;
        int n = arr.size();
        int laserCount = 0;
        for(int i=0;i<n;i++){
        string s = arr[i];
            int currOnes = 0;
            int m = s.length();
            for(int j=0;j<s.length();j++){
                    if(s[j]=='1') currOnes++;
            }
            laserCount += (prevOnes*currOnes);
            if(currOnes!=0) prevOnes = currOnes;
        }
        return laserCount;
        
    }
};
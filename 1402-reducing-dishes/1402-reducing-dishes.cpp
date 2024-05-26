class Solution {
public:
    int maxSatisfaction(vector<int>& satisfaction) {
        int n = satisfaction.size();
        sort(satisfaction.begin(),satisfaction.end());
        int suf[n];
         suf[n-1] = satisfaction[n-1];
        for(int i=n-2;i>=0;i--){
            suf[i] = suf[i+1] + satisfaction[i];
        }
        // find the pivot Idx
        int Idx = -1;
        for(int i=0;i<n;i++){
            if(suf[i]>=0){
                Idx = i;
                break;
            }
        }
        if(Idx==-1) return 0;
      // Max sum of like-time coefficient
        int maxSum = 0;
        int x = 1;
        for(int i=Idx;i<n;i++){
            maxSum += (satisfaction[i]*x);
            x++;
        }
        return maxSum;
    }
};
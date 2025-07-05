class Solution {
public:
    int kthSmallest(vector<vector<int>>& arr, int k) {
            int n = arr.size();
           priority_queue<int> pq; // maxheap
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    pq.push(arr[i][j]);
                 if(pq.size()>k) pq.pop();
                }
    }
                return pq.top();
    }
};
class Solution {
public:
    typedef pair<int,int> pi;
    vector<int> topKFrequent(vector<int>& arr, int k) {
        unordered_map<int,int> mp;
        // map pair is <ele,freq>
        for(int ele : arr){
            mp[ele]++;
        }
        // heap pair is <freq,ele>
        priority_queue<pi,vector<pi>,greater<pi>> pq;
        for(auto x : mp){
            int ele = x.first, freq = x.second;
            pair<int,int> p = {freq,ele};
            pq.push(p);
            // pq.push({x.second,x.first});
            if(pq.size()>k) pq.pop();
        }
        vector<int> ans;
        while(pq.size()>0){
            int ele = pq.top().second;
            ans.push_back(ele);
            pq.pop();
        }
        return ans;
    }
};
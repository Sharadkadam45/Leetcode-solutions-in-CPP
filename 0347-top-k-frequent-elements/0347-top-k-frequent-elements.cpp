class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n=nums.size();
        pair<int,int> pi;
        priority_queue<pair<int,int>> pq;
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        for(auto x:mp){
            int f=x.first;
            int s=x.second;
            pq.push({s,f});
        }

        vector<int> ans;
        while(k>0){
            ans.push_back(pq.top().second);
            k--;
            pq.pop();
        }
        return ans;
    }
};
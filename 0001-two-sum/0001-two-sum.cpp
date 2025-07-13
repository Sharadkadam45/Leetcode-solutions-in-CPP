class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        int n=nums.size();
        unordered_map<int,int> m;
        for(int i=0;i<n;i++){
            int rem=target-nums[i];
            if(m.find(rem)!=m.end()) {
                int idx=m[rem];
                m.erase(rem);
                ans.push_back(i);
                ans.push_back(idx);
            }
            else{
                m[nums[i]]=i;
            }
            
        }
        return ans;
    }
};
class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int n=nums.size();
        vector<int> ans(n);
        ans[0]=nums[0];
        for(int i=1;i<n;i++){
            ans[i]=nums[i]+ans[i-1];
        }
        int cnt=0;
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            if(ans[i]==goal) cnt++;
            int rem=ans[i]-goal;
            if(mp.find(rem)!=mp.end()) cnt+=mp[rem];
            mp[ans[i]]++;
        }
        return cnt;
    }
};
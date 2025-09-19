class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int> pre(n);
        for(int i=n-1;i>=0;i--){
            if(i==n-1) pre[i]=nums[i];
            else{
                pre[i]=pre[i+1]+nums[i];
            }
        }
        int count=0;
        unordered_map<int,int> mp;
        for(int i=n-1;i>=0;i--){
            if(pre[i]==k) count++;

            int rem=pre[i]-k;

            if(mp.find(rem)!=mp.end()) count+=mp[rem];

            mp[pre[i]]++;

            // cout<<i<<" "<<count<<endl;
        }

        return count;
    }
};
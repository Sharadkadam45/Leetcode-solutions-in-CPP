class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        set<vector<int>> s;
        sort(nums.begin(),nums.end());
        int i=0;
        while(i<n){
            int f=nums[i];
            while(i>0 &&  i<n && nums[i]==nums[i-1]) i++;
            int j=i+1;
            int k=n-1;
            while(j<k){
                int sum=nums[i]+nums[j]+nums[k];
                if(sum<0) j++;
                else if(sum>0) k--;
                else{
                    s.insert({nums[i],nums[j],nums[k]});
                    int c=nums[j];
                    while(j<n && nums[j]==c) j++;
                    c=nums[k];
                    while(k>=0 && nums[k]==c) k--;
                }
            }
            i++;
        }
        vector<vector<int>> ans;
        for(auto v:s){
            ans.push_back(v);
        }
        return ans;
    }
};
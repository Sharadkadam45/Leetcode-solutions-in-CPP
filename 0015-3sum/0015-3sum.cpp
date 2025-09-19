class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());

        int i=0;

        set<vector<int>> s;
        while(i<n){
            while(i>0 && i<n && nums[i]==nums[i-1]) i++;
            int j=i+1;
            int k=n-1;

            while(j<k){

                int sum=nums[i]+nums[j]+nums[k];

                if(sum>0) k--;
                else if(sum<0) j++;
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

        for(auto x:s){
            ans.push_back(x);
        }
        return ans;
    }
};
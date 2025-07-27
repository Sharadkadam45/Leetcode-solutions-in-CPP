class Solution {
public:
    int countHillValley(vector<int>& nums) {
        int n=nums.size();
        vector<int> v;
        v.push_back(nums[0]);
        int k=0;

        for(int i=0;i<n;i++){
            if(nums[i]!=v[k]) {
                v.push_back(nums[i]);
                k++;
            }
        } 

        int ans=0;
        if(v.size()==2) return ans;
        for(int i=1;i<v.size()-1;i++){
            if(v[i]>v[i-1] && v[i]>v[i+1]) ans++;
            if(v[i]<v[i-1] && v[i]<v[i+1]) ans++;
        }
        return ans;

    }
};
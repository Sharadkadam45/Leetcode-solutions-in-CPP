class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        int j=n-1;
        int ans=nums[i];
        while(i<=j){
            int mid=(i+j)/2;
            ans=min({nums[i],ans,nums[mid]});
            if(nums[mid]>=nums[i]) i=mid+1;
            else if(nums[mid]<=nums[j]) j=mid-1;
        }
        return ans;
    }
};

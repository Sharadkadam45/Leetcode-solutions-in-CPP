class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();

        if(n==1) return nums[0];
        if(n==2) return min(nums[1],nums[0]);

        if(nums[n-1]>nums[0]) return nums[0];
        else{
            int ans=INT_MAX;
            int i=0;
            int j=n-1;
            while(i<=j){
                int mid=(i+j)/2;
                if(nums[i]<=nums[mid]){
                    ans=min(ans,nums[i]);
                    i=mid+1;
                }
                else if(nums[mid]<=nums[j]){
                    ans=min(ans,nums[mid]);
                    j=mid-1;
                }
            }
            return ans;
        }
        return -1;
    }
};
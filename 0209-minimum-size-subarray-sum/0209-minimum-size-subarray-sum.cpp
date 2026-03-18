class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        if(n==1){
            if(target<=nums[0]) return 1;
            return 0;
        }
        
        for(int i=0;i<n;i++){
            if(nums[i]>=target) return 1;
        }

        int i=0;
        int j=1;
        int sum=nums[i]+nums[j];
        int len=INT_MAX;
        if(sum>=target) len=min(len,j-i+1);

        while(j<n){
            if(sum>=target) len=min(len,j-i+1);
            if(sum>target) {
                sum-=nums[i];
                i++;   
                // cout<<1<<" "; 
            }
            else {
                if(j+1<=n-1) sum+=nums[j+1];
                j++;   
                // cout<<2<<" ";
            }
        }
        
        if(sum>=target) len=min(len,j-i+1);
        if(len==INT_MAX) return 0;
        return len;
    }
};
class Solution {
public:
    int f(vector<int>& nums) {
        int n=nums.size();
        int prev=nums[0];
        int prev2=0;
        for(int i=1;i<n;i++){
            int take=nums[i];
            if(i>1) take+=prev2;
            int nontake=prev;
            
            int curr=max(take,nontake);
            prev2=prev;
            prev=curr;
        }
        return prev;
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return nums[0];
        if(n==2) return max(nums[0],nums[1]);
        vector<int> last;
        vector<int> first;
        for(int i=0;i<n;i++){
            if(i!=0) last.push_back(nums[i]);
            if(i!=n-1) first.push_back(nums[i]);
        }
        return max(f(last),f(first));
    }
};
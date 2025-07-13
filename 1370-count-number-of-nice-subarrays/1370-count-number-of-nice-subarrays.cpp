class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int n=nums.size();
        int i=0;
        int j=0;
        int odd=0;
        int ans=0;
        int cnt=0;
        while(j<n){
            if(nums[j]%2!=0){
                 odd++;
                 cnt=0;
            }
            while(odd==k){
                if(nums[i]%2!=0){
                    odd--;
                }
                i++;
                cnt++;
            }
            ans+=cnt;
            j++;
        }
        return ans;
    }
};
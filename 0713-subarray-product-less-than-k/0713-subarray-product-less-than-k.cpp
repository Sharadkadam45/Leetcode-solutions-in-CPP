class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k<=1) return 0;
        int n=nums.size();
        int i=0;
        int j=0;
        int p=1;
        int ans=0;
        while(j<n){
            p*=nums[j];
            while(p>=k){
                int len=(j-i);
                ans+=len;
                cout<<i<<" "<< ans<<endl;
                p=p/nums[i];
                i++;
            }
            j++;
        }
        
        while(i<n){
            int len=(j-i);
            ans+=len;
            p=p/nums[i];
            i++;
        }
        return ans;
    }
};
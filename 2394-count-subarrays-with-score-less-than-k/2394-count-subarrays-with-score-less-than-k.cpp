class Solution {
public:
    long long countSubarrays(vector<int>& nums, long long k) {
        long long  n=nums.size();
        long long i=0;
        long long j=0;
        long long sum=0;
        long long ans=0;
        while(j<n){
            sum+=(long long)nums[j];
            long long len=j-i+1;
            while((long long)(len*sum)>=k){
                long long l=j-i;
                sum-=nums[i];
                i++;
                len--;
                ans+=l;
            }
            j++;
        }
        while(i<n){
            long long l =(j-i);
            sum-=nums[i];
            i++;
            ans+=l;
        }
        return ans;
    }
};
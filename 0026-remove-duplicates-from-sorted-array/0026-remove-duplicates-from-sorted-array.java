class Solution {
    public int removeDuplicates(int[] nums) {
        int n=nums.length;
        if(n==1) return 1;
        int i=1;
        int idx=0;
        while(i<n){
            if(nums[i]!=nums[i-1]){
                nums[idx]=nums[i-1];
                idx++;
            }
            i++;
        }
        if(nums[n-1]!=nums[idx-1]) nums[idx]=nums[n-1];
        return idx+1;
    }
}
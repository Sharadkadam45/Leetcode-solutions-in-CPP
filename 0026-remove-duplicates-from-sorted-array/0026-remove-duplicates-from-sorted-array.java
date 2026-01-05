class Solution {
    public int removeDuplicates(int[] nums) {
        int n=nums.length;
        int i=0;
        int j=0;
        int idx=0;
        while(j<n){
            while(j<n && nums[i]==nums[j]) j++;
            nums[idx]=nums[i];
            idx++;
            i=j;
        }
        return idx;
    }
}
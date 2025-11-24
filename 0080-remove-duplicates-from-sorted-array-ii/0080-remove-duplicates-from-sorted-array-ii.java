class Solution {
    public int removeDuplicates(int[] nums) {
        int n=nums.length;

        int i=0;
        int j=0;
        int idx=0;

        while(j<n){
            if(nums[i]!=nums[j]){
                if(j-i==1){
                    nums[idx]=nums[i];
                    i=j;
                    idx++;
                }
                else if(j-i>=2){
                    nums[idx]=nums[i];
                    idx++;
                    nums[idx]=nums[i];
                    i=j;
                    idx++;
                }
            }
            j++;
        }
        if(j-i==1){
            nums[idx]=nums[i];
            i=j;
            idx++;
        }
        else if(j-i>=2){
            nums[idx]=nums[i];
            idx++;
            nums[idx]=nums[i];
            i=j;
            idx++;
        }

        return idx;
    }
}
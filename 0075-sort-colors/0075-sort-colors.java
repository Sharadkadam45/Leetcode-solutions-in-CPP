class Solution {
    public void sortColors(int[] nums) {
        int n=nums.length;
        int i=0;
        int j=n-1;
        int k=0;

        while(k<=j){
            if(nums[k]==0){
                int x=nums[i];
                nums[i]=nums[k];
                nums[k]=x;
                i++;
                k++;
            }
            else if(nums[k]==2){
                int x=nums[j];
                nums[j]=nums[k];
                nums[k]=x;
                j--;
            }
            else k++;
        }
    }
}
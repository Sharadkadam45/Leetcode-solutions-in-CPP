class Solution {
    public void rotatereversepart(int[] nums,int i,int j){
        int n=nums.length;
        while(i<=j){
            int temp=nums[i];
            nums[i]=nums[j];
            nums[j]=temp;
            i++;
            j--;
        }
    }
    public void rotate(int[] nums, int k) {
        int n=nums.length;

        k=k%n;
        if(k==0) return;

        rotatereversepart(nums,0,n-k-1);
        rotatereversepart(nums,n-k,n-1);
        rotatereversepart(nums,0,n-1);
    }
}
class Solution {
    public int majorityElement(int[] nums) {
        int n=nums.length;

        int x=nums[0];
        int f=1;

        int i=1;
        while(i<n){
           if(nums[i]==x) f++;
           else f--;

            if(f==0){
                f=1;
                x=nums[i];
            }  
           i++;
        }
        return x;
    }
}
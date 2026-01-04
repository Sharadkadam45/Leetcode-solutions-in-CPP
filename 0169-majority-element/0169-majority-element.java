class Solution {
    public int majorityElement(int[] nums) {
        int n=nums.length;

        int freq=1;
        int x=nums[0];
        for(int i=1;i<n;i++){
            if(x==nums[i]) freq++;
            else freq--;

            if(freq==0){
                x=nums[i];
                freq=1;
            }
        }
        return x;
    }
}
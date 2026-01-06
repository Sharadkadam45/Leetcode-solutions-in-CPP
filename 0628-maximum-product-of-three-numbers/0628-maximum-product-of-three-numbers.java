class Solution {
    public int maximumProduct(int[] nums) {
        Arrays.sort(nums);
        int n=nums.length;

        if(n==3){
            return nums[0]*nums[1]*nums[2];
        }
        int f=nums[0]*nums[1];
        int l=nums[n-1]*nums[n-2];

        int maxx=Integer.MIN_VALUE;
        for(int i=2;i<n;i++){
            maxx=Math.max(maxx,nums[i]);
        }
        
        f=f*maxx;
        maxx=Integer.MIN_VALUE;
        for(int i=0;i<n-2;i++){
            maxx=Math.max(maxx,nums[i]);
        }
        l=l*maxx;
        return Math.max(f,l);
        

    }
}
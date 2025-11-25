class Solution {
    public int[] productExceptSelf(int[] nums) {
        int n=nums.length;
        int[] suf=new int[n];
        int[] pre=new int[n];

        pre[0]=1;
        int x=nums[0];
        for(int i=1;i<n;i++){
            pre[i]=x;
            x*=nums[i];
        }

        suf[n-1]=1;
        x=nums[n-1];
        for(int i=n-2;i>=0;i--){
            suf[i]=x;
            x*=nums[i];
        }

        for(int i=0;i<n;i++){
            pre[i]*=suf[i];
        }
        return pre;
    }
}
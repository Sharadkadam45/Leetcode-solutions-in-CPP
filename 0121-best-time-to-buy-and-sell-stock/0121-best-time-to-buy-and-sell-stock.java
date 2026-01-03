class Solution {
    public int maxProfit(int[] prices) {
        
        int n=prices.length;
        if(n==0 || n==1) return 0;

        int[] suf=new int[n];
        suf[n-1]=prices[n-1];
        int maxx=suf[n-1];
        for(int i=n-2;i>=0;i--){
            suf[i]=maxx;
            if(prices[i]>maxx) maxx=prices[i];
        }
        int ans=0;
        for(int i=0;i<n;i++){
            ans=Math.max(ans,suf[i]-prices[i]);
        }
        return ans;
    }
}
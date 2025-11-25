class Solution {
    public int maxProfit(int[] prices) {
        int n=prices.length;
        int[] pre=new int[n];
        int maxx=prices[n-1];
        pre[n-1]=maxx;
        for(int i=n-2;i>=0;i--){
            if(prices[i]<maxx) pre[i]=maxx;
            else pre[i]=-1;
            maxx=Math.max(maxx,prices[i]);
        }
        int ans=-1;
        for(int i=0;i<n;i++){
            if(pre[i]!=-1) ans=Math.max(pre[i]-prices[i],ans);
        }
        return ans;
    }
}
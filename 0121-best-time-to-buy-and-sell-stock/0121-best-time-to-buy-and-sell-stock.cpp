class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<int> nge(n,-1);
        int maxx=prices[n-1];
        for(int i=n-2;i>=0;i--){
            nge[i]=maxx;
            maxx=max(maxx,prices[i]);
        }

        int ans=0;
        int idx=0;
        for(int i=0;i<n;i++){
            if(nge[i]!=-1 && (nge[i]-prices[i])>ans){
               ans=nge[i]-prices[i];
               idx=i;
               cout<<i<<" "<<ans<<endl;
            }
        }
        return ans;
    }
};
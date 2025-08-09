class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<int> v(n);
        int maxx=prices[n-1];
        for(int i=n-1;i>=0;i--){
            v[i]=maxx;
            maxx=max(maxx,prices[i]);
        }   

        int ans=0;
        for(int i=0;i<n;i++){
            if(prices[i] < v[i]) ans=max(ans,v[i]-prices[i]);
        }
        return ans;
    }
};
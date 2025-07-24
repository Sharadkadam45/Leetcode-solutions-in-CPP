class Solution {
public:
    bool helper(vector<int>& piles, int h,int capacity){
        int n=piles.size();
        long long cnt=0;
        for(int i=0;i<n;i++){
            // if(capacity<piles[i]) return false;
            if(piles[i]%capacity==0) cnt+=((long long)piles[i]/(long long)capacity);
            else cnt+=((long long)piles[i]/(long long)capacity)+1;
        }   
        if(cnt<=(long long)h) return true;
        else return false;

    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        int low=1;
        int high=INT_MIN;
        for(int i=0;i<n;i++){
            // low=min(low,piles[i]);
            high=max(high,piles[i]);
        }
        int ans=high;
        while(low<=high){
            int mid=(low+high)/2;
            if(helper(piles,h,mid)){
                ans=min(ans,mid);
                high=mid-1;
            }
            else low=mid+1;
        }
        return ans;
    }
};
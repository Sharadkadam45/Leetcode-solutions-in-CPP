class Solution {
public:
    bool helper(vector<int>& citations,int h){
        int n=citations.size();
        int cnt=0;
        for(int i=0;i<n;i++){
            if(citations[i]>=h) cnt++;
        }
        if(cnt>=h) return true;
        else return false;
    }
    int hIndex(vector<int>& citations) {
        int n=citations.size();

        int low=1;
        int high=INT_MIN;

        for(int i=0;i<n;i++){
            // low=min(low,citations[i]);
            high=max(high,citations[i]);
        }

        int  ans=0;
        while(low<=high){
            int mid=(low+high)/2;
            if(helper(citations,mid)){
                ans=mid;
                low=mid+1;
            }
            else high=mid-1;
        }
        return ans;
        
    }
};
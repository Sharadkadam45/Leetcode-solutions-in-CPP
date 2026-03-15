class Solution {
public:
    bool helper(vector<int>& v,int x){
        int n=v.size();
        int count=0;
        for(int i=0;i<n;i++){
            if(v[i]>=x) count++;
        }
        if(count>=x) return true;
        return false;
    }
    int hIndex(vector<int>& citations) {
        int n=citations.size();
        int i=0;
        int j=-1;
        for(int i=0;i<n;i++){
            j=max(j,citations[i]);
        }
        int ans=-1;
        while(i<=j){
            int mid=(i+j)/2;
            if(helper(citations,mid)) {
                ans=max(ans,mid);
                i=mid+1;
                
            }
            else {
                j=mid-1;
               
            }
            

        }
        return ans;
    }
};
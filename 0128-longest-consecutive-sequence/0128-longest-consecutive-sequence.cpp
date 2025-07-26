class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        set<int> st;
        for(int i=0;i<n;i++){
            st.insert(nums[i]);
        }

        int prev=INT_MIN;
        int len=0;
        int ans=0;

        for(auto x:st){
            if((prev+1)!=x){
                len=1;
                prev=x;
            }
            else{
                prev=x;
                len++;
            }
            ans=max(ans,len);
        }
        return ans;
    }
};
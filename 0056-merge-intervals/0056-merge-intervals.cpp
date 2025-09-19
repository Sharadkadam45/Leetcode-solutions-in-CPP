class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n=intervals.size();

        sort(intervals.begin(),intervals.end());

        vector<vector<int>> ans;

        vector<int> v;
        v.push_back(intervals[0][0]);
        v.push_back(intervals[0][1]);
        ans.push_back(v);
       

        for(int i=1;i<n;i++){
            int s=ans.size();
            if(intervals[i][0]<=ans[s-1][1]){
                ans[s-1][1]=max(intervals[i][1],ans[s-1][1]);
            }
            else{
                v.clear();
                v.push_back(intervals[i][0]);
                v.push_back(intervals[i][1]);
                ans.push_back(v);
            }
        }
        return ans;
    }
};
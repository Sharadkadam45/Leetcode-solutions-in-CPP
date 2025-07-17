class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n=strs.size();
        unordered_map<string,vector<string>> mp;
        for(int i=0;i<n;i++){
            string str=strs[i];
            sort(str.begin(),str.end());
            if(mp.find(str)!=mp.end()){
                mp[str].push_back(strs[i]);
            }
            else {
                vector<string> v;
                v.push_back(strs[i]);
                mp[str]=v;
            }
        }

        vector<vector<string>> ans;
        for(auto x:mp){
            ans.push_back(x.second);
        }
        return ans;

    }
};
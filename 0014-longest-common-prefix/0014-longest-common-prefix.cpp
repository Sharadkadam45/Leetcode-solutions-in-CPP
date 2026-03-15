class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size();
        if(n==1) return strs[0];
        sort(strs.begin(),strs.end());
        string ans="";
        string f=strs[0];
        string l=strs[n-1];
        int i=0;
        int k=min(f.size(),l.size());
        while(i<k && f[i]==l[i] ){
            ans+=f[i];
            i++;
        }
        return ans;
    }
};
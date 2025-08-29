class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        int i=0;
        int j=0;
        set<char> st;
        int ans=0;
        while(j<n){ 
            if(st.find(s[j])!=st.end()){
                // cout<<j<<endl;
                while(i<n && s[j]!=s[i]){
                    st.erase(s[i]);
                    i++;
                }
                st.erase(s[i]);
                i++;
            }
            else{
                st.insert(s[j]);
                ans=max(ans,j-i+1);
                j++;
            } 
        }
        return ans;
    }
};
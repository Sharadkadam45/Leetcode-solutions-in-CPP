class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        set<char> st;
        int i=0;
        int j=0;
        int ans=0;
        while(j<n){
            if(st.find(s[j])!=st.end()){
                while(s[i]!=s[j]){
                    st.erase(s[i]);
                    i++;
                }
                st.erase(s[i]);
                i++;
            }
            st.insert(s[j]);
            j++;

            ans=max(ans,(int)st.size());
        }
        return ans;
    }
};
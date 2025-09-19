class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        int i=0;
        int j=0;
        int ans=0;
        set<char> st;
        while(j<n){
            if(st.find(s[j])!=st.end()){
                while(i<n && s[i]!=s[j]){
                    st.erase(s[i]);
                    i++;
                }
                st.erase(s[i]);
                i++;
            }
            else{
                ans=max(ans,j-i+1);
                st.insert(s[j]);
                j++;
            }
        }   

        return ans;
    }
};
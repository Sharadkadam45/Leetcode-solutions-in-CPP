class Solution {
public:
    int max(int a,int b){
        if(a>=b) return a;
        return b;
    }
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        int j=0;
        int i=0;
        unordered_set<char> st;
        int maxx=INT_MIN;
        while(j<n){
            if(st.find(s[j])!=st.end()){
                // shrink the window
                while(s[j]!=s[i]){
                    st.erase(s[i]);
                    i++;
                }
                st.erase(s[i]);
                i++;
            }
            else {
                st.insert(s[j]);
                j++;
            }
            maxx=max(maxx,st.size());
        }
        if(maxx==INT_MIN) return 0;
        return maxx;
    }
};
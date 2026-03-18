class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(s=="") return true;
        int n=t.size();
        int m=s.size();

        int j=0;
        int i=0;

        while(j<n){
            if(s[i]==t[j]) i++;
            if(i==m) return true; 
            j++;
        }
        return false;
    }
};
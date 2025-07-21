class Solution {
public:
    string makeFancyString(string s) {
        int n=s.size();

        int i=1;
        char x=s[0];
        int f=1;
        string ans;
        ans+=x;

        while(i<n){
            if(s[i]==x) f++;
            else{
                x=s[i];
                f=1;
            }
            if(f<=2) {
                ans+=x;
            }
            i++;
        }
        return ans;
    }
};
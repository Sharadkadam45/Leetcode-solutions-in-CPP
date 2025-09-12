class Solution {
public:
    bool helper(char x){
        if (x == 'a' || x == 'e' || x == 'i' || x == 'o'
        || x == 'u' || x == 'A' || x == 'E' || x == 'I'
        || x == 'O' || x == 'U') return true;
        else return false;
    }
    string sortVowels(string s) {
        int n=s.size();
        string temp="";
        for(int i=0;i<n;i++){
            if(helper(s[i])){
                temp+=s[i];
            }
        }
        sort(temp.begin(),temp.end());
        int k=0;
        for(int i=0;i<n;i++){
            if(helper(s[i])){
                s[i]=temp[k];
                k++;
            }
        }
        return s;
    }
};
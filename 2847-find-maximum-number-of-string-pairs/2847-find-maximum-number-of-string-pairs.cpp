class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        int n=words.size();
        unordered_set<string> s;
        int ans=0;
        for(int i=0;i<n;i++){
            string str=words[i];
            reverse(str.begin(),str.end());
            if(s.find(str)!=s.end()){
                ans++;
                s.erase(str);
            }
            else{
                s.insert(words[i]);
            }
        }
        return ans;
    }
};
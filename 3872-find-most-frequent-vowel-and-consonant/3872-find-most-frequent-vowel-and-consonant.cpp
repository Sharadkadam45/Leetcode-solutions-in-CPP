class Solution {
public:
    bool check(char ch){
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u') return true;
        return false;
    }
    int maxFreqSum(string s) {
        int n=s.size();
        unordered_map<char,int> mp;
        int maxx1=-1;
        int maxx2=-1;
        for(int i=0;i<n;i++){
            if(check(s[i])){
                mp[s[i]]++;
                maxx1=max(maxx1,mp[s[i]]);
            }
            else{
                mp[s[i]]++;
                maxx2=max(maxx2,mp[s[i]]);
            }
        }

        cout<<maxx2<<endl;
        if(maxx1==-1 || maxx2==-1) return max(maxx1,maxx2);
        return maxx1+maxx2;
    }
};
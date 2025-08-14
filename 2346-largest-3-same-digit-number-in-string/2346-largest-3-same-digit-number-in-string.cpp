class Solution {
public:
    string largestGoodInteger(string num) {
        int n=num.size();
        unordered_map<int,int> mp;
        int maxx=INT_MIN;
        for(int i=0;i<3;i++){
            int k = num[i]- '0';
            mp[k]++;
        }
        if(mp.size()==1) maxx=stoi(num.substr(0,3));
        int i=1;
        int j=3;
        string ans="";
        while(j<n){
            int p=num[i-1]-'0';
            mp[p]--;
            if(mp[p]==0) mp.erase(p);
            
            int s=num[j]-'0';
            mp[s]++;

            if(mp.size()==1) {
                if(maxx < stoi(num.substr(i,3))){
                    ans=num.substr(i,3);
                    maxx=stoi(num.substr(i,3));
                }
            }
            i++;
            j++;
        }
        return ans;
    }
};
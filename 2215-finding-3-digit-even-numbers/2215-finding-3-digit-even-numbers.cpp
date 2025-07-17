class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        int n=digits.size();
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            mp[digits[i]]++;
        }
        vector<int> ans;
        for(int i=100;i<=999;i+=2){
            int num=i;
            
            int f=num%10;
            num=num/10;
            if(mp.find(f)==mp.end()) continue;
            mp[f]--;
            if(mp[f]==0) mp.erase(f);

            int s=num%10;
            num=num/10;
            if(mp.find(s)==mp.end()){
                mp[f]++;
                continue;
            }
            mp[s]--;
            if(mp[s]==0) mp.erase(s);

            int t=num%10;
            if(mp.find(t)==mp.end()){
                mp[f]++;
                mp[s]++;
                continue;
            }

            ans.push_back(i);
            mp[f]++;
            mp[s]++;
        }
        return ans;
    }
};
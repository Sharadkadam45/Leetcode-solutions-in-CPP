class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return 1;
        unordered_map<int,int> mp;
       
       int maxx=-1;
       for(int i=0;i<n;i++){
        mp[nums[i]]++;
        if(mp[nums[i]]>maxx) maxx=mp[nums[i]];
       } 
       int ans=0;
    //    cout<<maxx<<endl;
       for(auto x:mp){
        if(x.second==maxx) ans+=maxx;
       }
       return ans;
    }
};
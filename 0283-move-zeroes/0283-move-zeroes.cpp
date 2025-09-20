class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        vector<int> v=nums;


        int idx=0;
        for(int i=0;i<n;i++){
            if(v[i]!=0) nums[idx++]=v[i];
        }
        while(idx<n){
            nums[idx++]=0;
        }

        
    }
};
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int x=nums[0];
        int f=1;
        for(int i=1;i<n;i++){
            if(nums[i]==x) f++;
            else f--;
            if(f==0){
                x=nums[i];
                f=1;
            }
        }
        return x;
    }
};
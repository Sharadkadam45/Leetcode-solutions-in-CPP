class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int n=nums.size();
        if(n<=2) return true;

        if(nums[0]<nums[n-1]){
            // incresing
            int p=INT_MIN;
            for(int i=0;i<n;i++){
                if(p==INT_MIN) p=nums[i];
                else if(nums[i]>=p) p=nums[i];
                else return false;
            }

        }
        else{
            // decresing 
            int p=INT_MIN;
            for(int i=0;i<n;i++){
                if(p==INT_MIN) p=nums[i];
                else if(nums[i]<=p) p=nums[i];
                else return false;
            }
        }

        return true;
    }
};
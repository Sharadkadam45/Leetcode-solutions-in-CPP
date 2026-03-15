class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return 1;

        int i=0;
        int j=0;
        int k=0;
        while(j<n){
            while(j<n && nums[i]==nums[j]) j++;
            nums[k]=nums[i];
            i=j;
            k++;
        }
        
        return k;
    }
};
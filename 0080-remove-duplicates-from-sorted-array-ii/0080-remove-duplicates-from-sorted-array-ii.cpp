class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();

        int i=0;
        int j=0;
        int k=0;

        while(j<n){
            while(j<n && nums[i]==nums[j]) j++;
            int len=j-i;
            if(len>2) len=2;

            while(len>0){
                nums[k]=nums[i];
                len--;
                k++;
            }

            i=j;
        }
        return k;
    }
};
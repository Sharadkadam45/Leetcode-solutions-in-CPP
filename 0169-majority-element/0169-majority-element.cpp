class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int f=1;
        int x=nums[0];
        for(int i=1;i<n;i++){
            if(nums[i]==x) f++;
            if(nums[i]!=x) f--;

            if(f==0){
                f=1;
                x=nums[i];
            }
            cout<<f<<" "<<x<<endl;
        }
        return x;
    }
};
class Solution {
public:
    void rotatepart(vector<int>& nums,int i,int j){
        int n=nums.size();
        while(i<=j){
            swap(nums[i],nums[j]);
            i++;
            j--;
        }
    }
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n;
        if(k==0) return ;
        rotatepart(nums,0,n-k-1);
        rotatepart(nums,n-k,n-1);
        rotatepart(nums,0,n-1);
    }
};
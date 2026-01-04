class Solution {
    public List<List<Integer>> threeSum(int[] nums) {
        int n=nums.length;
        Arrays.sort(nums);
        Set<List> st=new HashSet<>();
        int i=0;
        while(i<n){
            while(i>0 && i<n && nums[i]==nums[i-1]) i++;
            int j=i+1;
            int k=n-1;
            
            while(j<k){
                int sum=nums[i]+nums[j]+nums[k];
                if(sum==0) {
                    List<Integer> arr=new ArrayList<>();
                    arr.add(nums[i]);
                    arr.add(nums[j]);
                    arr.add(nums[k]);
                    st.add(arr);
                    int x=nums[j];
                    while(j<k && nums[j]==x) j++;
                    x=nums[k];
                    while(j<k && nums[k]==x) k--;
                } 
                else if(sum>0) k--;
                else j++;
            }
            i++;
        }
        List<List<Integer>> ans=new ArrayList<>();
        for(List x:st){
            ans.add(x);
        }
        return ans;
    }
}
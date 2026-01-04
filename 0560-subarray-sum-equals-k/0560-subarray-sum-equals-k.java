class Solution {
    public int subarraySum(int[] nums, int k) {
        int n=nums.length;

        Map<Integer,Integer> mp=new HashMap<>();

        int[] pre=new int[n];
        pre[0]=nums[0];

        for(int i=1;i<n;i++){
            pre[i]=pre[i-1]+nums[i];
        }

        int cnt=0;
        for(int i=0;i<n;i++){
            if(pre[i]==k) cnt++;
            int rem=pre[i]-k;

            if(mp.containsKey(rem)){
                cnt+=mp.get(rem);
            }
            mp.put(pre[i],mp.getOrDefault(pre[i],0)+1);
        }
        return cnt;
    }
}
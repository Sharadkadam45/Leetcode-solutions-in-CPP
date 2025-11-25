class Solution {
    public boolean helper(int[] a,int mid){
        int n=a.length;
        int count=0;
        for(int i=0;i<n;i++){
            if(a[i]>=mid) count++;
        }
        if(count>=mid) return true;
        else return false;
    }
    public int hIndex(int[] citations) {
        int n=citations.length;
        int low=0;
        int high=Integer.MIN_VALUE;

        for(int i=0;i<n;i++){
            high=Math.max(citations[i],high);
        }
        int ans=0;
        while(low<=high){
            int mid=(low+high)/2;
            if(helper(citations,mid)){
                ans=mid;
                low=mid+1;
            }
            else high=mid-1;
        }


        return ans;

    }
}
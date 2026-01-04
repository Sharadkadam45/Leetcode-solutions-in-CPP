class Solution {
    public void merge(int[] nums1, int m, int[] nums2, int n) {
        n=m;
        m=nums2.length;
        int i=n-1;
        int j=m-1;
        int k=m+n-1;
        System.out.println(n);
        System.out.println(m);
        while(i>=0 && j>=0){
            if(nums1[i]>=nums2[j]){
                nums1[k]=nums1[i];
                i--;
            }
            else {
                nums1[k]=nums2[j];
                j--;
            }
            k--;
        }
        if(j!=-1){
            while(j>=0){
                nums1[k]=nums2[j];
                j--;
                k--;
            }
        }
    }
}
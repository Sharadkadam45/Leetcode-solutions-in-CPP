class Solution {
    public int maxArea(int[] height) {
        int n=height.length;

        int i=0;
        int j=n-1;

        int ans=0;
        while(i<j){
            int heights=Math.min(height[i],height[j]);
            int width=j-i;

            ans=Math.max(heights*width,ans);
            if(height[i]<height[j]) i++;
            else j--;
        }
        return ans;
    }
}
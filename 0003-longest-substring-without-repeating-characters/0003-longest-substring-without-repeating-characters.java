class Solution {
    public int lengthOfLongestSubstring(String s) {
        char[] str=s.toCharArray();
        int n=str.length;

        Set<Character> mp=new HashSet<>();
        int i=0;
        int j=0;

        int ans=0;
        
        while(j<n){
            if(mp.contains(str[j])){
                while(str[i]!=str[j]){
                    mp.remove(str[i]);
                    i++;
                }
                mp.remove(str[i]);
                i++;
            }
            ans=Math.max(ans,j-i+1);
            mp.add(str[j]);
            j++;
        }
        return ans;
    }
}
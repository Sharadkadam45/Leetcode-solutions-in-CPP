class Solution {
    public String longestCommonPrefix(String[] strs) {
        Arrays.sort(strs);
        int n=strs.length;

        String common="";

        String f=strs[0];
        String l=strs[n-1];
        int m=Math.min(f.length(),l.length());
        int i=0;
        while(i<m && f.charAt(i)==l.charAt(i)){
            common+=f.charAt(i);
            i++;
        }
        return common;
    }
}
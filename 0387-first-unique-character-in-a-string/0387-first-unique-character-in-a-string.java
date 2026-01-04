class Solution {
    public int firstUniqChar(String s) {
        char[] str=s.toCharArray();
        int n=str.length;

        Map<Character,Integer> mp=new HashMap<>();
        for(int i=0;i<n;i++){
            mp.put(str[i],mp.getOrDefault(str[i],0)+1);
        }
        for(int i=0;i<n;i++){
            if(mp.get(str[i])==1) return i;
        }
        return -1;
    }
}
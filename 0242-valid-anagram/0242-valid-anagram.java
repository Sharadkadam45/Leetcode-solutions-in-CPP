class Solution {
    public boolean isAnagram(String s, String t) {
        if(s.length()!=t.length()) return false;
        Map<Character,Integer> mp=new HashMap<>();
        int n=s.length();

        char[] s1=s.toCharArray();
        char[] s2=t.toCharArray();

        for(int i=0;i<n;i++){
            mp.put(s1[i],mp.getOrDefault(s1[i],0)+1);
        }

        for(int i=0;i<n;i++){
            if(!mp.containsKey(s2[i])) return false;
            mp.put(s2[i],mp.get(s2[i])-1);
            if(mp.get(s2[i])==0) mp.remove(s2[i]);
        }
        return (mp.size()==0);
    }
}
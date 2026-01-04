class Solution {
    public boolean isIsomorphic(String s, String t) {
        if(s.length()!=t.length()) return false;
        char[] s1=s.toCharArray();
        char[] s2=t.toCharArray();
        Map<Character,Character> m1=new HashMap<>();
        Map<Character,Character> m2=new HashMap<>();

        int n=s.length();
        for(int i=0;i<n;i++){
            if(m1.containsKey(s1[i])) {
                if(s2[i]!=m1.get(s1[i])) return false;
            }
            else{
                m1.put(s1[i],s2[i]);
            }
        }

        for(int i=0;i<n;i++){
            if(m2.containsKey(s2[i])){
                if(s1[i]!=m2.get(s2[i])) return false;
            }
            else{
                m2.put(s2[i],s1[i]);
            }
        }
        return true;
    }
}
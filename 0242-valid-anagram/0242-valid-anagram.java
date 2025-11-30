class Solution {
    public boolean isAnagram(String s, String t) {
        if(s.length()!=t.length()) return false;

        Map<Character,Integer> mp=new HashMap<>();

        char[] c1=s.toCharArray();
        char[] c2=t.toCharArray();

        for(char ch:c1){
            mp.put(ch,mp.getOrDefault(ch,0)+1);
        }

        for(char ch:c2){
            if(mp.containsKey(ch)){
                mp.put(ch,mp.get(ch)-1);
                if(mp.get(ch)==0){
                    mp.remove(ch);
                }
            }
            else return false;
        }

        return (mp.size()==0);
    }
}
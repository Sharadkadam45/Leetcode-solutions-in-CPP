class Solution {
    public String convertToTitle(int x) {
        if(x==0) return ""; 
        if(x<=26){
            char c=(char)('A'+x-1);
            return ""+c;
        }
        x--;
        char ch=(char)('A'+(x%26));
        int val=x/26;
        String sub=convertToTitle(val);
        return ""+sub+ch;
        
    }
}
class Solution {
    public boolean isPalindrome(String s) {
        int n=s.length();
        int i=0;
        int j=n-1;
        while(i<=j){
            char x=s.charAt(i);
            char y=s.charAt(j);
            if(!Character.isLetterOrDigit(x)){
                i++;
                continue;
            }
            if(!Character.isLetterOrDigit(y)){
                j--;
                continue;
            }
            if(Character.toLowerCase(x)!=Character.toLowerCase(y)) return false;
            i++;
            j--;
        }

        return true;
    }
}
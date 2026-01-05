class Solution {
    public boolean isValid(String s) {
        char[] str=s.toCharArray();
        int n=str.length;

        Stack<Character> st=new Stack<>();
        for(int i=0;i<n;i++){
            if(str[i]=='[' || str[i]=='(' || str[i]=='{') st.push(str[i]);
            else{
                if(st.size()==0) return false;
                if(str[i]==']' && st.peek()=='[') st.pop();
                else if(str[i]==')' && st.peek()=='(') st.pop();
                else if(str[i]=='}' && st.peek()=='{') st.pop();
                else return false;
            }
            
        }
        return (st.size()==0);
    }
}
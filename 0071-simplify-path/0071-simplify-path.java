class Solution {
    public String simplifyPath(String path) {
        char[] str=path.toCharArray();
        int n=str.length;

        Stack<String> st=new Stack<>();
        int i=0;
        while(i<n){

            int j=i+1;
            while(j<n && str[j]!='/') j++;

            String sub=path.substring(i+1,j);

            System.out.println(i+"  at this :-> "+sub);

            if (sub.equals("..")) {
            if (!st.isEmpty()) st.pop();
            }
            else if (sub.equals(".") || sub.equals("")) {
                // do nothing
            }
            else {
                st.push(sub);
            }

            
            i=j;
        }
        String ans="";
        String[] temp=new String[st.size()];

        int j=st.size()-1;
        while(st.size()>0){
            temp[j]=st.peek();
            st.pop();
            j--;
        }       
        for(i=0;i<temp.length;i++){
            ans+="/";
            ans+=temp[i];
            System.out.println(temp[i]);
        } 
        if(ans=="") return "/";
        return ans;
    }
}
class Solution {
    public String addBinary(String a, String b) {
        char[] str1=a.toCharArray();
        char[] str2=b.toCharArray();

        int n=str1.length;
        int m=str2.length;

        StringBuilder sb=new StringBuilder();
        int i=n-1;
        int j=m-1;
        int parity=0;
        while(i>=0 || j>=0){
            int c1=0;
            if(i>=0) {
                c1=str1[i] - '0';
                i--;
            }
            int c2=0;
            if(j>=0){
                c2=str2[j] - '0';
                j--;
            }


            int sum=c1+c2+parity;
            if(sum==1 || sum==0){
                char ch = (char) (sum + '0');
                sb.append(ch);
                parity=0;
            }
            else if(sum==2){
                sb.append('0');
                parity=1;
            }else{
                sb.append('1');
                parity=1;
            }
        }
        if(parity==1) sb.append('1');
        String rev = sb.reverse().toString();

        return rev;
    }
}
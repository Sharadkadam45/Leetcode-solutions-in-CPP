class Solution {
    public int reverse(int x) {
        int sign=(x<0)?-1:1;
        if(x<0) x*=-1;
        long rev=0;
        while(x>0){
            rev=rev*10+(long)x%10;
            x=x/10;
            if(rev<Integer.MIN_VALUE || rev>Integer.MAX_VALUE) return 0;
        }
        if(rev*sign<Integer.MIN_VALUE) return 0;
        return (int)rev*sign;
    }
}
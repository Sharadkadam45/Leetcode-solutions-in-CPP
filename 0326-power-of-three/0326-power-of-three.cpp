class Solution {
public:
    bool isPowerOfThree(int n) {
        int x=n;
        int c=0;
 
        if(n<=0) return false;

        while(x!=1 && x%3==0){
            x=x/3;
            c++;
        }

        if(x!=1) return false;
        cout<<c<<endl;
        if(n<0){
            if(c%2!=0) return false;
            else return true;
        }
        return true;
    }
};
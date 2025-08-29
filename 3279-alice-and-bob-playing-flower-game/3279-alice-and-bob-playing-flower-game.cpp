class Solution {
public:
    long long flowerGame(int n, int m) {
        long long ans=0;
        for(int i=n;i>=1;i--){
            if(i%2==0){
                int n2=m/2;
                if(m>1 && m%2!=0) n2++;
                if(n2>=1) ans+=n2;
                if(m==1) ans++;
            }
            else{
                int n2=m/2;
                // if(m>1 && m%2!=0) n2++;
                if(n2>=1) ans+=n2;
            }
        }
        return ans;
    }
};
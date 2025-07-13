class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int n=arr.size();
        long long required=k*threshold;
        int sum=0;
        int ans=0;
        for(int i=0;i<k;i++){
            sum+=arr[i];
        }
        if((long long)sum>=required) ans++;
        int i=1;
        int j=k;
        while(j<n){
            sum-=arr[i-1];
            sum+=arr[j];
            if((long long)sum>=required) ans++;
            i++;
            j++;
        }
        return ans;
    }
};
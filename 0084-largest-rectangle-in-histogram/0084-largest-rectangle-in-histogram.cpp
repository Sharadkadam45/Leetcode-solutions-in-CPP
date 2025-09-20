class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();

        vector<int> nsi(n,n);
        stack<int> s1;
        s1.push(n-1);
        int i=n-2;
        while(i>=0){
            while(s1.size()>0 && heights[i]<=heights[s1.top()]) s1.pop();
            if(s1.size()==0) nsi[i]=n;
            else nsi[i]=s1.top();
            s1.push(i);
            i--;
        }

        vector<int> psi(n,-1);
        stack<int> s2;
        s2.push(0);
        i=1;
        while(i<n){
            while(s2.size()>0 && heights[i]<=heights[s2.top()]) s2.pop();
            if(s2.size()==0) psi[i]=-1;
            else psi[i]=s2.top();
            s2.push(i);
            i++;
        }

        int ans=0;
        for(int i=0;i<n;i++){
            int h=heights[i];
            int b=nsi[i]-psi[i]-1;
            ans=max(ans,h*b);
        }

        return ans;

    }
};
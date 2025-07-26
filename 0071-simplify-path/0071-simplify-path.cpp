class Solution {
public:
    int getNextSlash(string path,int i){
        int n=path.size();
        for(int k=i;k<n;k++){
            if(path[k]=='/') return k;
        }
        return n;
    }
    void helper(stack<string>& st,vector<string>& v){
        while(st.size()>0){
            v.push_back(st.top());
            st.pop();
        }
    }
    string simplifyPath(string path) {
        int n=path.size();
        stack<string> st;
        int i=1;
        while(i<n){
            int j=getNextSlash(path,i);
            string str=path.substr(i,j-i);
            if(str=="..") {
                if(st.size()>0) st.pop();
            }
            else if(str!="."  && str!="/" && str!="//" && str!=""){
                st.push(str);
            }
            i=j;
            while(i<n && path[i]=='/') i++;
        }
        string ans="";
        vector<string> v;
        helper(st,v);

        n=v.size();
        for(int i=n-1;i>=0;i--){
            ans+='/';
            ans+=v[i];
        }
        if(ans=="") return "/";
        return ans;
    }
};

